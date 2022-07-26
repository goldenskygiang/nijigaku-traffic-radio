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
    Cb_RibbonMenuItemOnClick callback = std::bind(&DetectAccidentPlugin::OnStartCaptureBtnClick, this);
    startCaptureHandle = startCaptureBtn->SetCallbackOnClick(callback);
}

void DetectAccidentPlugin::UnloadMenu()
{
    startCaptureBtn->UnsetCallbackOnClick(startCaptureHandle);

    ribbonTab->DeleteGroup(ribbonGroup);
    if (ribbonTab->GetRibbonGroupsCount() == 0)
    {
        g_applicationServices->GetMainForm()->GetMainRibbonMenu()->DeleteTab(ribbonTab);
    }
}


void DetectAccidentPlugin::OnStartCaptureBtnClick()
{
    // main logic here
}
