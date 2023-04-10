#include "w_b_r.h"
#include "ui_w_b_r.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

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
   b.move(420,200);
   connect(&b,&QPushButton::clicked,this,&w_b_r::sendslot);

   setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground);
   pic.load(tr(":/C:/Users/DELL/Desktop/aaaaa.png"));
   resize(1200,750);
   move(270,150);
}
void w_b_r::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void w_b_r::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void w_b_r::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void w_b_r::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void w_b_r::sendslot()
{
    emit wbrsignal();
}

w_b_r::~w_b_r()
{
    delete ui;
}

void w_b_r::on_pushButton_clicked()
{
    this->close();
}
