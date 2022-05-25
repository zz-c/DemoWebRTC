#include "Index.h"
#include "DemoCapture.h"
#include <QMessageBox>
#include <iostream>
extern "C" {
#include "libavcodec/avcodec.h"
}

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
	demoCapture->show();//Openstr������ʾ
	//this->hide();
	this->close();
}
void Index::slotTest()
{
	QMessageBox message(QMessageBox::NoIcon, "Tip", "slotTest FFmpeg");
	std::cout << "Test FFmpeg" << std::endl;
	std::cout << avcodec_configuration() << std::endl;
	message.exec();
}

void DemoCapture::on_returnButton_clicked()
{
	//QMessageBox message(QMessageBox::NoIcon, "Tip", "Back successfully ");
	//message.exec();
	Index* index = new Index;
	index->show();//program������ʾ
	//this->hide();//����������
	this->close();
}
