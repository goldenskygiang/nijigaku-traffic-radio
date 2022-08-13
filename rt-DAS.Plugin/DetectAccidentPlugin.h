#pragma once

#include "F8API.h"
#include <atomic>
#include <thread>

class DetectAccidentPlugin
{
private:
    F8MainRibbonTabProxy ribbonTab;
    F8MainRibbonGroupProxy ribbonGroup;

    F8MainRibbonButtonProxy startCaptureBtn;
    F8MainRibbonButtonProxy stopCaptureBtn;
    void* startCaptureHandle;
    void* stopCaptureHandle;

    std::thread daThread;

    void DetectAccident();

    std::atomic<bool> isCapturing;

public:
    void InitializeMenu();
    void UnloadMenu();

    void OnStartCaptureBtnClick();
    void OnStopCaptureBtnClick();
};
