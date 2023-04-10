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
}

w_s_t::~w_s_t()
{
    delete ui;
}
