#include "maindress.h"
#include "ui_maindress.h"

maindress::maindress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maindress)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic3.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic4.jpg)");
    ui->label_6->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic6.jpg)");
    ui->label_7->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic7.jpg)");
    ui->label_8->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic8.jpg)");
    ui->label_9->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic9.jpg)");
    ui->label_10->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic12.png)");

    //connect(c4,SIGNAL(mysignal()),this,SLOT(dealslot()));



}

maindress::~maindress()
{
    delete ui;
}



void maindress::on_radioButton_clicked()
{
    this->close();
    w->show();
}

void maindress::on_radioButton_2_clicked()
{
    this->close();
    c1->show();
}

void maindress::on_radioButton_3_clicked()
{
    this->close();
    c2->show();
}

void maindress::on_radioButton_clicked(bool checked)
{
    this->close();
    w->show();
}


void maindress::on_radioButton_2_clicked(bool checked)
{
    this->close();
    c1->show();
}

void maindress::on_radioButton_3_clicked(bool checked)
{
    this->close();
    c2->show();
}

/*void maindress::dealslot()
{
   c4->hide();
    show();
}*/
