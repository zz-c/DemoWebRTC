#include <iostream>
#include <Windows.h>

#include "DesktopCtrl.h"

namespace desktop {

	void DesktopCtrl::test() {
		std::cout << "desktop test" << std::endl;
	}

	void DesktopCtrl::mouseMove(int x,int y) {
		std::cout << "x=" << x << ",y=" << y << std::endl;
		SetCursorPos(x, y);
	}

	void DesktopCtrl::leftClick() {
		mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}

	void DesktopCtrl::rightClick() {
		mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
	}

} //namespace desktop