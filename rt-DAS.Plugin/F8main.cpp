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
