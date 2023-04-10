#include "cw_s_t.h"
#include "ui_cw_s_t.h"

cw_s_t::cw_s_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_s_t)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwst1.jpg)");
   ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwst2.jpg)");
   ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwst3.png)");
   ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwst4.png)");
   ui->label_9->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwst5.png)");
   b.setParent(this);
   b.setText("BACK");
   b.move(70,70);
   connect(&b,&QPushButton::clicked,this,&cw_s_t::sendslot);
}
void cw_s_t::sendslot()
{
    emit cwstsignal();
}
cw_s_t::~cw_s_t()
{
    delete ui;
}
