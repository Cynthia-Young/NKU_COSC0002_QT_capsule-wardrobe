#include "w_s_t.h"
#include "ui_w_s_t.h"

w_s_t::w_s_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_s_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u2.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u3.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u4.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u5.png)");
    ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u6.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u7.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);
    connect(&b,&QPushButton::clicked,this,&w_s_t::sendslot);
}
void w_s_t::sendslot()
{
    emit wstsignal();
}

w_s_t::~w_s_t()
{
    delete ui;
}
