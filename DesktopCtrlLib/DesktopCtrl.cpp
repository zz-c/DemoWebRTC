#include <iostream>

#include "DesktopCtrl.h"

namespace desktop {
	void DesktopCtrl::test() {
		std::cout << "desktop test" << std::endl;
	}
	void DesktopCtrl::mouseMove(int x,int y) {
		std::cout << "x=" << x << ",y=" << y << std::endl;
	}

} //namespace desktop