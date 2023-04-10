#include "widget.h"
#include "ui_widget.h"

#define WIDTH 120
#define HEIGHT 50

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyButton *btn01 = new MyButton(this);
    btn01 ->setText("男生");
    btn01 ->setGeometry((this->width()-WIDTH)/2,(this->height()-HEIGHT)/2,WIDTH,HEIGHT);
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

void Widget::on_pushButton_2_clicked()
{
    this->close();
    n->show();
}
