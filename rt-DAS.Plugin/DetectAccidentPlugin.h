#pragma once

#include "F8API.h"

class DetectAccidentPlugin
{
private:
    F8MainRibbonTabProxy ribbonTab;
    F8MainRibbonGroupProxy ribbonGroup;

    F8MainRibbonButtonProxy startCaptureBtn;
    void* startCaptureHandle;

public:
    void InitializeMenu();
    void UnloadMenu();

    void OnStartCaptureBtnClick();
};
