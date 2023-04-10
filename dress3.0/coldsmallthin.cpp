#include "coldsmallthin.h"
#include "ui_coldsmallthin.h"
#include"maindress.h"

coldsmallthin::coldsmallthin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldsmallthin)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold1.png)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold2.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold3.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold4.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold5.jpg)");
    ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold6.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold7.png)");
    ui->label_9->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold8.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold9.png)");
    ui->label_11->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold10.png)");


}
void coldsmallthin::sendslot()
{
    emit mysignal();
}

coldsmallthin::~coldsmallthin()
{
    delete ui;
}


