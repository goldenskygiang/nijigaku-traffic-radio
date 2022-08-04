#include "DetectAccidentPlugin.h"

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
    startCaptureBtn->SetEnabled(true);
    Cb_RibbonMenuItemOnClick callback = std::bind(&DetectAccidentPlugin::OnStartCaptureBtnClick, this);
    startCaptureHandle = startCaptureBtn->SetCallbackOnClick(callback);

    stopCaptureBtn = ribbonGroup->CreateButton(L"StopCaptureBtn");
    stopCaptureBtn->SetCaption(L"Stop Capture");
    stopCaptureBtn->SetEnabled(false);
    callback = std::bind(&DetectAccidentPlugin::OnStopCaptureBtnClick, this);
    stopCaptureHandle = stopCaptureBtn->SetCallbackOnClick(callback);
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

void DetectAccidentPlugin::OnStartCaptureBtnClick()
{
    // main logic here
    startCaptureBtn->SetEnabled(false);
    stopCaptureBtn->SetEnabled(true);
}

void DetectAccidentPlugin::OnStopCaptureBtnClick()
{
    startCaptureBtn->SetEnabled(true);
    stopCaptureBtn->SetEnabled(false);
}
