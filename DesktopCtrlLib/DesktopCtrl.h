#ifndef __DESKTOPCTRL_H__
#define __DESKTOPCTRL_H__

#include <iostream>

namespace desktop {

    class DesktopCtrl {
    public:
        DesktopCtrl() {

        };

        ~DesktopCtrl() {
        }

    public:
        void test();
        void mouseMove(int x,int y);

    private:

    };

} //namespace

#endif //__DESKTOPCTRL_H__