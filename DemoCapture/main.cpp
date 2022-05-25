#include "Index.h"
#include <QtWidgets/QApplication>

#pragma comment(lib,"avcodec.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Index w;
    w.show();
    return a.exec();
}
