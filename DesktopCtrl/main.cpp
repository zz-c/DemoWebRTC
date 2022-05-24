#include <iostream>
#include "DesktopCtrl.h"

#pragma comment(lib, "DesktopCtrlLib.lib")
int main()
{
    desktop::DesktopCtrl* ctrl = new desktop::DesktopCtrl();
    ctrl->test();
    ctrl->mouseMove(3, 3);
}