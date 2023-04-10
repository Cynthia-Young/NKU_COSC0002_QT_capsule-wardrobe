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

    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);
    connect(&b,&QPushButton::clicked,this,&warmbone::sendslot);


    connect(w1,SIGNAL(wbtsignal()),this,SLOT(dealwbt()));
    connect(w2,SIGNAL(wbrsignal()),this,SLOT(dealwbr()));
    connect(w3,SIGNAL(wstsignal()),this,SLOT(dealwst()));
    connect(w4,SIGNAL(wsrsignal()),this,SLOT(dealwsr()));


}

void warmbone::dealwbt()
{
    w1->hide();
    show();
}
void warmbone::dealwbr()
{
    w2->hide();
    show();
}
void warmbone::dealwst()
{
    w3->hide();
    show();
}
void warmbone::dealwsr()
{
    w4->hide();
    show();
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

void warmbone::sendslot()
{
    emit warmbonesignal();
}
