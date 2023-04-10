#include "cw_s_t.h"
#include "ui_cw_s_t.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>


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
   b.move(370,150);
   connect(&b,&QPushButton::clicked,this,&cw_s_t::sendslot);
   setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground);
   pic.load(tr(":/C:/Users/DELL/Desktop/aaa.png"));
   resize(1200,750);
   move(270,150);
}
void cw_s_t::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void cw_s_t::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void cw_s_t::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void cw_s_t::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void cw_s_t::sendslot()
{
    emit cwstsignal();
}
cw_s_t::~cw_s_t()
{
    delete ui;
}

void cw_s_t::on_pushButton_clicked()
{
    this->close();
}
