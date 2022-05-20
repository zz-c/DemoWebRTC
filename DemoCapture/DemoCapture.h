#pragma once

#include <QtWidgets/QWidget>
#include "ui_DemoCapture.h"

class DemoCapture : public QWidget
{
    Q_OBJECT

public:
    DemoCapture(QWidget *parent = Q_NULLPTR);

private:
    Ui::DemoCaptureClass ui;

private slots:
    void on_returnButton_clicked();
};
