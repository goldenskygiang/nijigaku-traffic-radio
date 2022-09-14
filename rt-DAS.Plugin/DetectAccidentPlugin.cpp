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

    F8MainRibbonPanelProxy txtPanel = ribbonGroup->CreatePanel(L"Panel_TxtInput");
    F8MainRibbonPanelProxy btnPanel = ribbonGroup->CreatePanel(L"Panel_BtnInput");

    F8MainRibbonLabelProxy txtPanelLabel = txtPanel->CreateLabel(L"Panel_TxtInput_Label");
    txtPanelLabel->SetCaption(L"Car plate number (Required)");
    carNumberTxt = txtPanel->CreateEdit(L"CarNumberTxt");
    carNumberTxt->SetText(DA_DEFAULT_CAR_NAME);
    carNumberTxt->SetTop(txtPanelLabel->GetTop() + txtPanelLabel->GetHeight() + 6);

    startCaptureBtn = btnPanel->CreateButton(L"StartCaptureBtn");
    startCaptureBtn->SetCaption(L"Start Capture");
    Cb_RibbonMenuItemOnClick callback = std::bind(&DetectAccidentPlugin::OnStartCaptureBtnClick, this);
    startCaptureHandle = startCaptureBtn->SetCallbackOnClick(callback);

    stopCaptureBtn = btnPanel->CreateButton(L"StopCaptureBtn");
    stopCaptureBtn->SetCaption(L"Stop Capture");
    stopCaptureBtn->SetTop(startCaptureBtn->GetTop() + startCaptureBtn->GetHeight() + 6);
    callback = std::bind(&DetectAccidentPlugin::OnStopCaptureBtnClick, this);
    stopCaptureHandle = stopCaptureBtn->SetCallbackOnClick(callback);

    txtPanel->SetWidth(max(txtPanelLabel->GetWidth(), carNumberTxt->GetWidth()) + 6);
    txtPanel->SetHeight(txtPanelLabel->GetHeight() + carNumberTxt->GetHeight() + 6);

    btnPanel->SetWidth(startCaptureBtn->GetWidth() + 6);
    btnPanel->SetHeight(startCaptureBtn->GetHeight() + stopCaptureBtn->GetHeight() + 6);

    _ReloadButtons(false);
}

void DetectAccidentPlugin::_ReloadButtons(bool capturing)
{
    isCapturing.store(capturing);
    startCaptureBtn->SetEnabled(!isCapturing.load());
    carNumberTxt->SetEnabled(!isCapturing.load());
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

void SendRequest(const wchar_t* hostname, const char* route, const char* method, int port,
    std::string content, DWORD dwFlag=INTERNET_FLAG_SECURE)
{
    PCSTR acceptTypes[] = { "*/*", NULL };

    HINTERNET hSession = InternetOpenA(NULL, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    HINTERNET hConnect = InternetConnect(hSession, hostname, port, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 1);
    HINTERNET hRequest = HttpOpenRequestA(
        hConnect, method, route,
        NULL, NULL, acceptTypes, dwFlag, 1);
    HttpSendRequestA(hRequest, "Content-Type:application/json\0", -1L, (LPVOID)content.c_str(), strlen(content.c_str()));

    InternetCloseHandle(hSession);
    InternetCloseHandle(hConnect);
    InternetCloseHandle(hRequest);
}

void PingCarPosition(PositionUpdate upd)
{
    json p = upd;
    SendRequest(SERVER_HOSTNAME, SERVER_ROUTE, "POST", SSL_PORT, p.dump());
#ifndef NDEBUG
    SendRequest(TEST_HOSTNAME, TEST_ROUTE, "POST", TEST_PORT, p.dump(), NULL);
#endif
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

bool isValidCarName(std::wstring carNum)
{
    std::wstring banned = L".$#[]/";

    return std::none_of(carNum.begin(), carNum.end(), [banned](wchar_t s)
        {
            return banned.find(s) != std::wstring::npos;
        });
}

void DetectAccidentPlugin::_DetectAccident()
{
    F8HorizontalCoordinateConverterProxy coordConverter = g_applicationServices
        ->GetCoordinateConverter()->GetHorizontalCoordinateConvertor();

    std::wstring carNum = carNumberTxt->GetText();
    if (!isValidCarName(carNum))
    {
        _ExitCaptureError(L"Invalid car number", L"Car number must not contain any of those characters: '.', '$', '#', '[', ']', '/'.\nPlease type again");
        return;
    }

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

        PositionUpdate upd(carNum, coord.X, coord.Y, crash, roadName);
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
