#pragma once

#include "F8API.h"

class DetectAccidentPlugin
{
private:
    F8MainRibbonTabProxy ribbonTab;
    F8MainRibbonGroupProxy ribbonGroup;

    F8MainRibbonButtonProxy startCaptureBtn;
    F8MainRibbonButtonProxy stopCaptureBtn;
    void* startCaptureHandle;
    void* stopCaptureHandle;

public:
    void InitializeMenu();
    void UnloadMenu();

    void OnStartCaptureBtnClick();
    void OnStopCaptureBtnClick();
};
