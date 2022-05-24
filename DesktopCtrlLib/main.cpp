#include <iostream>
#include "DesktopCtrl.h"

int main()
{
    desktop::DesktopCtrl* ctrl = new desktop::DesktopCtrl();
    ctrl->test();
    ctrl->mouseMove(1, 2);
}