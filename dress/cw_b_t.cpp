#include "cw_b_t.h"
#include "ui_cw_b_t.h"

cw_b_t::cw_b_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_b_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb1.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb2.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb3.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb4.png)");
    ui->label_13->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb5.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb6.png)");
    ui->label_12->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb7.png)");
    ui->label_14->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb8.png)");
}

cw_b_t::~cw_b_t()
{
    delete ui;
}
