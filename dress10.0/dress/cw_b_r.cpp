#include "cw_b_r.h"
#include "ui_cw_b_r.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

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
   b.move(370,150);
   connect(&b,&QPushButton::clicked,this,&cw_b_r::sendslot);

   setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground);
   pic.load(tr(":/C:/Users/DELL/Desktop/aaa.png"));
   resize(1200,750);
   move(270,150);
}
void cw_b_r::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void cw_b_r::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void cw_b_r::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void cw_b_r::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void cw_b_r::sendslot()
{
    emit cwbrsignal();
}
cw_b_r::~cw_b_r()
{
    delete ui;
}

void cw_b_r::on_pushButton_clicked()
{
    this->close();
}
