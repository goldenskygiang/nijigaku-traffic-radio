#include "DetectAccidentPlugin.h"
#include <thread>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <Windows.h>

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
        std::wostringstream _os;
        _os << std::fixed << std::setprecision(3);
        _os << "Camera XYZ: " << pos.X << " " << pos.Y << " " << pos.Z << "\n";
        std::wstring dbg = _os.str();
        OutputDebugStringW(dbg.c_str());

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
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
