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

    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);

    connect(&b,&QPushButton::clicked,this,&w_b_t::sendslot);
}

void w_b_t::sendslot()
{
    emit wbtsignal();
}

w_b_t::~w_b_t()
{
    delete ui;
}
