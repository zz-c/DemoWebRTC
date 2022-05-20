#include "Index.h"
#include "DemoCapture.h"
#include <QMessageBox>

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
	demoCapture->show();//Openstr窗口显示
	//this->hide();
	this->close();
}
void Index::slotTest()
{
	QMessageBox message(QMessageBox::NoIcon, "Tip", "slotTest ");
	message.exec();
}

void DemoCapture::on_returnButton_clicked()
{
	//QMessageBox message(QMessageBox::NoIcon, "Tip", "Back successfully ");
	//message.exec();
	Index* index = new Index;
	index->show();//program窗口显示
	//this->hide();//本窗口隐藏
	this->close();
}
