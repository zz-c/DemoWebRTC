#include "DemoSocket.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoSocket w;
    w.show();
    return a.exec();
}
