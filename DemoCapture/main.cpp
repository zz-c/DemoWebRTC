#include "DemoCapture.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoCapture w;
    w.show();
    return a.exec();
}
