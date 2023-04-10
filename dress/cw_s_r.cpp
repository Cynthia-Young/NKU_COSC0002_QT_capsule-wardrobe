#include "cw_s_r.h"
#include "ui_cw_s_r.h"

cw_s_r::cw_s_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_s_r)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t3.jpg)");
   ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t4.jpg)");
}

cw_s_r::~cw_s_r()
{
    delete ui;
}
