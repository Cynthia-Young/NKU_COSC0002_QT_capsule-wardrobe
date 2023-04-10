#include "widget.h"
#include "ui_widget.h"
#include"QStyleOption"
#include"QPainter"

#define WIDTH 120
#define HEIGHT 50

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyButton *btn01 = new MyButton(this);
    btn01 ->setText("BOY");
    btn01 ->setGeometry((this->width()-WIDTH)/2,(this->height()-HEIGHT)/2,WIDTH,HEIGHT);
    btn01->setStyleSheet("border-image:rgb()");

ui->label->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/b3.jpg)");
ui->loginForm->setStyleSheet("background:rgba(0,0,0,50);"
                    " border-radius:8px"
                    " }");
QSound *startsound=new QSound(":/new/prefix1/C:/Users/DELL/Desktop/music1.wav",this);
startsound->play();
startsound->setLoops(-1);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    this->close();
    m->show();
}
