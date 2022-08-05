#include "DetectAccidentPlugin.h"

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
    ribbonTab = ribbonMenu->GetTabByName(L"NijigakuPlugins");

    if (!Assigned(ribbonTab))
    {
        ribbonTab = ribbonMenu->CreateTab(L"NijigakuPlugins", 10000);
        ribbonTab->SetCaption(L"Nijigaku Plugins");
    }

    ribbonGroup = ribbonTab->CreateGroup(L"Group_DA", 1);
    ribbonGroup->SetCaption(L"Detect Accident");

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
        std::ostringstream _os;
        _os << std::fixed << std::setprecision(3);
        _os << "Camera XYZ: " << pos.X << " " << pos.Y << " " << pos.Z << "\n";
        std::string dbg = _os.str();
        //OutputDebugStringW(dbg.c_str());

        HINTERNET hSession = InternetOpenA("MyAgent", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
        HINTERNET hConnect = InternetConnect(hSession, L"webhook.site", 80, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 1);
        HINTERNET hRequest = HttpOpenRequestA(hConnect, "POST", "/1270f543-8ace-4341-8bc8-1c27aad21ecf", NULL, NULL, NULL, 0, 1);
        HttpSendRequestA(hRequest, NULL, 0, (LPVOID)dbg.c_str(), strlen(dbg.c_str()));

        InternetCloseHandle(hSession);
        InternetCloseHandle(hConnect);
        InternetCloseHandle(hRequest);

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
