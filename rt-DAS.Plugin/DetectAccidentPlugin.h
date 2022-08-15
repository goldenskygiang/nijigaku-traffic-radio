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

    void _ExitCaptureError(const wchar_t* title, const wchar_t* msg);
    void _ReloadButtons(bool capturing);
    void _DetectAccident();

    std::atomic<bool> isCapturing;

public:
    void InitializeMenu();
    void UnloadMenu();

    void OnStartCaptureBtnClick();
    void OnStopCaptureBtnClick();
};
