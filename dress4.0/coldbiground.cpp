#include "coldbiground.h"
#include "ui_coldbiground.h"

coldbiground::coldbiground(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldbiground)
{
    ui->setupUi(this);
     ui->label_16->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q8.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q2.jpg)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q3.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q4.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q5.png)");
    ui->label_12->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q6.png)");
    //ui->label_14->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q7.png)");
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q1.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);
    connect(&b,&QPushButton::clicked,this,&coldbiground::sendslot);
}
void coldbiground::sendslot()
{
    emit cbrsignal();
}
coldbiground::~coldbiground()
{
    delete ui;
}
