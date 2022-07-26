#ifdef __GNUG__ || __MINGW64__
#define UNICODE
#endif
#include "F8API.h"
#include "DetectAccidentPlugin.h"

DetectAccidentPlugin DAPlugin;

void StartProgram(void)
{
    DAPlugin.InitializeMenu();
}
void StopProgram(void)
{
    DAPlugin.UnloadMenu();
}
