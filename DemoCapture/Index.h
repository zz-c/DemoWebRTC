#pragma once

#include <QWidget>
#include "ui_Index.h"
#include "DemoCapture.h"

class Index : public QWidget
{
	Q_OBJECT

public:
	Index(QWidget *parent = Q_NULLPTR);
	~Index();

private:
	Ui::Index ui;
	DemoCapture* demoCapture;

private slots:
	void on_goCaptureButton_clicked();
};
