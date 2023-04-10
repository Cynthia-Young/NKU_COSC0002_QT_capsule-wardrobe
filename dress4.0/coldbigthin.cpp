#include "coldbigthin.h"
#include "ui_coldbigthin.h"

coldbigthin::coldbigthin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldbigthin)
{
    ui->setupUi(this);
     ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic17.png)");
     ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic18.png)");
     ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic19.png)");
     ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic20.jpg)");
     b.setParent(this);
     b.setText("BACK");
     b.move(70,70);
     connect(&b,&QPushButton::clicked,this,&coldbigthin::sendslot);
}
void coldbigthin::sendslot()
{
    emit cbtsignal();
}
coldbigthin::~coldbigthin()
{
    delete ui;
}

