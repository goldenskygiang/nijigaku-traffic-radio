#include "DetectAccidentPlugin.h"
#include "Constants.h"

#include <thread>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <Windows.h>
#include <WinInet.h>

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

    isCapturing.store(false);
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

void PingTestCameraPosition(F8dVec3 pos)
{
    std::ostringstream _os;
    _os << std::fixed << std::setprecision(3);
    _os << "Camera XYZ: " << pos.X << " " << pos.Y << " " << pos.Z << "\n";
    std::string dbg = _os.str();

    SendRequest(TEST_HOSTNAME, TEST_ROUTE, "POST", dbg);
}

void DetectAccidentPlugin::DetectAccident()
{
    while (true)
    {
        if (!isCapturing.load())
        {
            return;
        }

        // do stuff here

        F8MainFormProxy mainForm = g_applicationServices->GetMainForm();
        F8MainCameraProxy mainCamera = mainForm->GetMainCamera();

        auto pos = mainCamera->GetMainCameraState().eye;

        // code to test camera pos & thread functionality.
#ifndef NDEBUG
        PingTestCameraPosition(pos);
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
#endif


    }
}

void DetectAccidentPlugin::OnStartCaptureBtnClick()
{
    // main logic here
    isCapturing.store(true);
    startCaptureBtn->SetEnabled(!isCapturing.load());
    stopCaptureBtn->SetEnabled(isCapturing.load());

    daThread = std::thread(&DetectAccidentPlugin::DetectAccident, this);
}

void DetectAccidentPlugin::OnStopCaptureBtnClick()
{
    if (!isCapturing.load())
    {
        startCaptureBtn->SetEnabled(!isCapturing.load());
        stopCaptureBtn->SetEnabled(isCapturing.load());
        return;
    }

    isCapturing.store(false);
    startCaptureBtn->SetEnabled(!isCapturing.load());
    stopCaptureBtn->SetEnabled(isCapturing.load());

    daThread.join();
}
