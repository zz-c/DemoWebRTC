#include "Index.h"
#include "DemoCapture.h"

Index::Index(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Index::~Index()
{
}

void Index::on_goCaptureButton_clicked()
{
	demoCapture = new DemoCapture;
	demoCapture->show();//Openstr´°¿ÚÏÔÊ¾
	this->hide();
}