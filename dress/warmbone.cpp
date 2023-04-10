#include "warmbone.h"
#include "ui_warmbone.h"

warmbone::warmbone(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::warmbone)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic13.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic14.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic15.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic16.jpg)");


}
warmbone::~warmbone()
{
    delete ui;
}

void warmbone::on_radioButton_3_clicked(bool checked)
{
    this->close();
    w1->show();
}

void warmbone::on_radioButton_clicked(bool checked)
{
    this->close();
    w2->show();
}

void warmbone::on_radioButton_4_clicked(bool checked)
{
    this->close();
    w3->show();
}

void warmbone::on_radioButton_2_clicked(bool checked)
{
    this->close();
    w4->show();
}
