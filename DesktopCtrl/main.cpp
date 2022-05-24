#include <iostream>
#include <Windows.h>

#include "DesktopCtrl.h"


#pragma comment(lib, "DesktopCtrlLib.lib")
int main()
{
    desktop::DesktopCtrl* ctrl = new desktop::DesktopCtrl();
    ctrl->test();
    //ctrl->rightClick();
    int x = 3;
    int y = 3;
    while (1) {
        //std::cout << "Sleep" << std::endl;
        x++;
        y++;
        if (x>300) {
            break;
        }
        Sleep(50);
        ctrl->mouseMove(x, y);
    }
}