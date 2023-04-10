#include "w_s_r.h"
#include "ui_w_s_r.h"

w_s_r::w_s_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_s_r)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w2.png)");
   ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w3.png)");
   ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w1.png)");

   b.setParent(this);
   b.setText("BACK");
   b.move(70,70);
   connect(&b,&QPushButton::clicked,this,&w_s_r::sendslot);
}
void w_s_r::sendslot()
{
    emit wsrsignal();
}

w_s_r::~w_s_r()
{
    delete ui;
}
