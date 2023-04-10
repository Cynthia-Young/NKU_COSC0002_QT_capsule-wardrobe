#include "cw_s_r.h"
#include "ui_cw_s_r.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>


cw_s_r::cw_s_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_s_r)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t3.jpg)");
   ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/t4.jpg)");
   b.setParent(this);
   b.setText("BACK");
   b.move(370,150);
   connect(&b,&QPushButton::clicked,this,&cw_s_r::sendslot);

   setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground);
   pic.load(tr(":/C:/Users/DELL/Desktop/aaa.png"));
   resize(1200,750);
   move(270,150);
}
void cw_s_r::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void cw_s_r::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void cw_s_r::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void cw_s_r::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void cw_s_r::sendslot()
{
    emit cwsrsignal();
}
cw_s_r::~cw_s_r()
{
    delete ui;
}

void cw_s_r::on_pushButton_clicked()
{
    this->close();
}
