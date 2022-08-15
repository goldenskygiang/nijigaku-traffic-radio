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

    _ReloadButtons(false);
}

void DetectAccidentPlugin::_ReloadButtons(bool capturing)
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
    HINTERNET hConnect = InternetConnect(hSession, hostname, SSL_PORT, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 1);
    HINTERNET hRequest = HttpOpenRequestA(
        hConnect, method, route,
        NULL, NULL, NULL, INTERNET_FLAG_SECURE, 1);
    HttpSendRequestA(hRequest, NULL, 0, (LPVOID)content.c_str(), strlen(content.c_str()));

    InternetCloseHandle(hSession);
    InternetCloseHandle(hConnect);
    InternetCloseHandle(hRequest);
}

void PingCarPosition(PositionUpdate upd)
{
    json p = upd;
    SendRequest(TEST_HOSTNAME, TEST_ROUTE, "POST", p.dump());
}

void DetectAccidentPlugin::_ExitCaptureError(const wchar_t* title, const wchar_t* msg)
{
    _ReloadButtons(false);

    auto msgBox = MessageBox(
        NULL,
        msg,
        title,
        MB_ICONHAND
    );
}

void DetectAccidentPlugin::_DetectAccident()
{
    F8HorizontalCoordinateConverterProxy coordConverter = g_applicationServices
        ->GetCoordinateConverter()->GetHorizontalCoordinateConvertor();

    while (isCapturing.load())
    {
        F8SimulationCoreProxy sim = g_applicationServices->GetSimulationCore();

        F8ProjectProxy proj = g_applicationServices->GetProject();
        if (!Assigned(proj))
        {
            _ExitCaptureError(L"No opening project", L"Please open a project first.");
            return;
        }

        F8ScenarioProxy scenario = NULL;
        for (int i = 0; i < proj->GetScenariosCount(); i++)
        {
            if (wcscmp(proj->GetScenario(i)->GetName(), DA_SCENARIO_NAME) == 0)
            {
                scenario = proj->GetScenario(i);
                break;
            }
        }

        if (scenario == NULL || !Assigned(scenario))
        {
            _ExitCaptureError(
                L"No specified scenario",
                L"Please refer to the setup guide to create a separate scenario for the plugin.");
            return;
        }

        F8EventProxy event = NULL;
        for (int i = 0; i < scenario->GetEventsCount(); i++)
        {
            if (wcscmp(scenario->GetEvent(i)->GetName(), DA_EVENT_NAME) == 0)
            {
                event = scenario->GetEvent(i);
                break;
            }
        }

        if (event == NULL || !Assigned(event))
        {
            _ExitCaptureError(
                L"Scenario misconfiguration",
                L"Please create the event DA_Crash in the plugin scenario");
            return;
        }

        F8TrafficSimulationProxy traffic = sim->GetTrafficSimulation();
        F8MainDriverProxy driver = Assigned(traffic) ? traffic->GetDriver() : NULL;
        F8TransientCarInstanceProxy car = Assigned(driver) ? driver->GetCurrentCar() : NULL;

        if (!Assigned(driver) || !Assigned(car))
        {
            _ExitCaptureError(L"No traffic driver found", L"Please start the driver simulation");
            return;
        }

        auto pos = car->GetPosition();
        auto road = car->GetLatestRoad();

        auto roadName = Assigned(road) ? road->GetName() : DA_UNKNOWN_ROAD;

        F8dVec2 xy, coord;
        xy.X = pos.X, xy.Y = pos.Y;
        F8HcsConvertResultType res;

        coordConverter->Convert(_hcOpenGL_XZ, _hcGlobal_EN, xy, coord, res);

        bool crash = sim->GetUserVariable(DA_VAR_IDX) > 0;

        PositionUpdate upd(DA_CAR_NAME, coord.X, coord.Y, crash, roadName);
        PingCarPosition(upd);
        
        std::this_thread::sleep_for(std::chrono::milliseconds(TEST_PERIOD_MILISEC));

        if (crash)
        {
            sim->SetUserVariable(DA_VAR_IDX, 0);
        }
    }
}

void DetectAccidentPlugin::OnStartCaptureBtnClick()
{
    _ReloadButtons(true);

    daThread = std::thread(&DetectAccidentPlugin::_DetectAccident, this);
    daThread.detach();
}

void DetectAccidentPlugin::OnStopCaptureBtnClick()
{
    _ReloadButtons(false);
}
