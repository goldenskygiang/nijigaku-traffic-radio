#include "DetectAccidentPlugin.h"
#include "Constants.h"
#include "DataModels.h"

#include <thread>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

#include <Windows.h>
#include <WinInet.h>

#include "nlohmann/json.hpp"

using json = nlohmann::json;

#pragma comment(lib, "Wininet.lib")

void DetectAccidentPlugin::InitializeMenu()
{
    F8MainFormProxy mainForm = g_applicationServices->GetMainForm();
    F8MainRibbonProxy ribbonMenu = mainForm->GetMainRibbonMenu();
    ribbonTab = ribbonMenu->GetTabByName(GRP_NAME);

    if (!Assigned(ribbonTab))
    {
        ribbonTab = ribbonMenu->CreateTab(GRP_NAME, GRP_ORDER);
        ribbonTab->SetCaption(GRP_CAPTION);
    }

    ribbonGroup = ribbonTab->CreateGroup(DA_NAME, DA_ORDER);
    ribbonGroup->SetCaption(DA_CAPTION);

    startCaptureBtn = ribbonGroup->CreateButton(L"StartCaptureBtn");
    startCaptureBtn->SetCaption(L"Start Capture");
    Cb_RibbonMenuItemOnClick callback = std::bind(&DetectAccidentPlugin::OnStartCaptureBtnClick, this);
    startCaptureHandle = startCaptureBtn->SetCallbackOnClick(callback);

    stopCaptureBtn = ribbonGroup->CreateButton(L"StopCaptureBtn");
    stopCaptureBtn->SetCaption(L"Stop Capture");
    callback = std::bind(&DetectAccidentPlugin::OnStopCaptureBtnClick, this);
    stopCaptureHandle = stopCaptureBtn->SetCallbackOnClick(callback);

    ReloadButtons(false);
}

void DetectAccidentPlugin::ReloadButtons(bool capturing)
{
    isCapturing.store(capturing);
    startCaptureBtn->SetEnabled(!isCapturing.load());
    stopCaptureBtn->SetEnabled(isCapturing.load());
}

void DetectAccidentPlugin::UnloadMenu()
{
    startCaptureBtn->UnsetCallbackOnClick(startCaptureHandle);
    stopCaptureBtn->UnsetCallbackOnClick(stopCaptureHandle);

    ribbonTab->DeleteGroup(ribbonGroup);
    if (ribbonTab->GetRibbonGroupsCount() == 0)
    {
        g_applicationServices->GetMainForm()->GetMainRibbonMenu()->DeleteTab(ribbonTab);
    }
}

void SendRequest(const wchar_t* hostname, const char* route, const char* method, std::string content)
{
    HINTERNET hSession = InternetOpenA(NULL, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    HINTERNET hConnect = InternetConnect(hSession, hostname, 80, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 1);
    HINTERNET hRequest = HttpOpenRequestA(hConnect, method, route, NULL, NULL, NULL, 0, 1);
    HttpSendRequestA(hRequest, NULL, 0, (LPVOID)content.c_str(), strlen(content.c_str()));

    InternetCloseHandle(hSession);
    InternetCloseHandle(hConnect);
    InternetCloseHandle(hRequest);
}

void PingTestCameraPosition(F8dVec2 pos)
{
    PositionUpdate upd("ExampleCar", pos.X, pos.Y, false);
    json p = upd;

    SendRequest(TEST_HOSTNAME, TEST_ROUTE, "POST", p.dump());
}

void DetectAccidentPlugin::DetectAccident()
{
    while (isCapturing.load())
    {
        F8SimulationCoreProxy sim = g_applicationServices->GetSimulationCore();

        F8TrafficSimulationProxy traffic = sim->GetTrafficSimulation();
        F8MainDriverProxy driver = Assigned(traffic) ? traffic->GetDriver() : NULL;
        F8TransientCarInstanceProxy car = Assigned(driver) ? driver->GetCurrentCar() : NULL;

        if (!Assigned(driver) || !Assigned(car))
        {
            ReloadButtons(false);

            auto msgBox = MessageBox(
                NULL,
                L"Please start the driver simulation",
                L"No traffic driver found",
                MB_ICONHAND
            );
            
            return;
        }

        auto pos = car->GetPosition();
        auto road = car->GetLatestRoad();

        F8dVec2 xy, coord;
        xy.X = pos.X, xy.Y = pos.Y;
        F8HcsConvertResultType res;

        coordConverter->Convert(_hcOpenGL_XZ, _hcGlobal_EN, xy, coord, res);

        // code to test camera pos & thread functionality.

#ifndef NDEBUG
        PingTestCameraPosition(coord);
#endif
        
        std::this_thread::sleep_for(std::chrono::milliseconds(TEST_PERIOD_MILISEC));
    }
}

void DetectAccidentPlugin::OnStartCaptureBtnClick()
{
    coordConverter = g_applicationServices->GetCoordinateConverter()->GetHorizontalCoordinateConvertor();
    ReloadButtons(true);
    daThread = std::thread(&DetectAccidentPlugin::DetectAccident, this);
    daThread.detach();
}

void DetectAccidentPlugin::OnStopCaptureBtnClick()
{
    ReloadButtons(false);
}
