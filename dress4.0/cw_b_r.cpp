#include "cw_b_r.h"
#include "ui_cw_b_r.h"

cw_b_r::cw_b_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_b_r)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr1.jpg)");
   ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr2.png)");
   ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr6.gif)");
   ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr3.png)");
   ui->label_9->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr4.jpg)");
   ui->label_11->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwbr5.jpg)");
   b.setParent(this);
   b.setText("BACK");
   b.move(70,70);
   connect(&b,&QPushButton::clicked,this,&cw_b_r::sendslot);
}

void cw_b_r::sendslot()
{
    emit cwbrsignal();
}
cw_b_r::~cw_b_r()
{
    delete ui;
}
