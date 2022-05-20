#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DemoSocket.h"

class DemoSocket : public QMainWindow
{
    Q_OBJECT

public:
    DemoSocket(QWidget *parent = Q_NULLPTR);

private:
    Ui::DemoSocketClass ui;
};
