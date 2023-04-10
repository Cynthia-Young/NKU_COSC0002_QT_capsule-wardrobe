#include "w_b_t.h"
#include "ui_w_b_t.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

w_b_t::w_b_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_b_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/k3.jpg)");

    b.setParent(this);
    b.setText("BACK");
    b.move(420,200);

    connect(&b,&QPushButton::clicked,this,&w_b_t::sendslot);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/aaaaa.png"));
    resize(1200,750);
    move(270,150);
}
void w_b_t::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void w_b_t::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void w_b_t::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void w_b_t::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void w_b_t::sendslot()
{
    emit wbtsignal();
}

w_b_t::~w_b_t()
{
    delete ui;
}

void w_b_t::on_pushButton_clicked()
{
    this->close();
}
