#include "coldsmallroound.h"
#include "ui_coldsmallroound.h"

coldsmallroound::coldsmallroound(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldsmallroound)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p1.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p2.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p3.png)");
   ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p4.png)");
   ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p5.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p6.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);
    connect(&b,&QPushButton::clicked,this,&coldsmallroound::sendslot);

}
void coldsmallroound::sendslot()
{
    emit csrsignal();
}
coldsmallroound::~coldsmallroound()
{
    delete ui;
}
