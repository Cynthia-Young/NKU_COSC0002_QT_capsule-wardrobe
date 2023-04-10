#include "coldandwarm.h"
#include "ui_coldandwarm.h"

coldandwarm::coldandwarm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldandwarm)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic13.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic14.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic15.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic16.jpg)");
}

coldandwarm::~coldandwarm()
{
    delete ui;
}


void coldandwarm::on_radioButton_clicked(bool checked)
{
    this->close();
    h1->show();
}

void coldandwarm::on_radioButton_2_clicked(bool checked)
{
    this->close();
    h2->show();
}

void coldandwarm::on_radioButton_4_clicked(bool checked)
{
    this->close();
    h3->show();
}

void coldandwarm::on_radioButton_3_clicked(bool checked)
{
    this->close();
    h4->show();
}
