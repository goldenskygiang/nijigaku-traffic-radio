#include "DetectAccidentPlugin.h"
#include "F8API.h"

class DetectAccidentPlugin
{
    F8MainRibbonTabProxy ribbonTab;
    F8MainRibbonGroupProxy ribbonGroup;

    F8MainRibbonButtonProxy startCaptureBtn;
    void* startCaptureHandle;

    void _onStartCaptureBtnClick()
    {
        // main logic here
    }

    void _registerInput()
    {
        startCaptureBtn = ribbonGroup->CreateButton(L"StartCaptureBtn");
        startCaptureBtn->SetCaption(L"Start Capture");
        Cb_RibbonMenuItemOnClick callback = std::bind(&DetectAccidentPlugin::_onStartCaptureBtnClick, this);
        startCaptureHandle = startCaptureBtn->SetCallbackOnClick(callback);
    }

    void _unregisterHandles()
    {
        startCaptureBtn->UnsetCallbackOnClick(startCaptureHandle);
    }

public:
    void InitializeMenu()
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

        _registerInput();
    }

    void UnloadMenu()
    {
        _unregisterHandles();

        ribbonTab->DeleteGroup(ribbonGroup);
        if (ribbonTab->GetRibbonGroupsCount() == 0)
        {
            g_applicationServices->GetMainForm()->GetMainRibbonMenu()->DeleteTab(ribbonTab);
        }
    }
};
