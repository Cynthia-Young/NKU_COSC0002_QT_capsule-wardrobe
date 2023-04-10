#include "w_b_r.h"
#include "ui_w_b_r.h"

w_b_r::w_b_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_b_r)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr1.png)");
   ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr2.png)");
   ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr3.jpg)");
   ui->label_9->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr4.png)");
   ui->label_11->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr5.jpg)");
   ui->label_13->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/wbr6.png)");

   b.setParent(this);
   b.setText("BACK");
   b.move(70,70);
   connect(&b,&QPushButton::clicked,this,&w_b_r::sendslot);
}

void w_b_r::sendslot()
{
    emit wbrsignal();
}

w_b_r::~w_b_r()
{
    delete ui;
}
