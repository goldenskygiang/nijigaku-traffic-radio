#include "DetectAccidentPlugin.h"
#include <thread>
#include <iostream>
#include <string>
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
    int counter = 0;

    while (true)
    {
        if (!isCapturing.load())
        {
            return;
        }

        // do stuff here

        // code to test thread functionality. omit this please.
        /*std::wstring dbg = std::to_wstring(counter) + L"\n";
        OutputDebugStringW(dbg.c_str());
        counter++;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));*/


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
