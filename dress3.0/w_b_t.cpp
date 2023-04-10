#include "w_b_t.h"
#include "ui_w_b_t.h"

w_b_t::w_b_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_b_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k3.jpg)");

}

w_b_t::~w_b_t()
{
    delete ui;
}
