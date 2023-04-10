#include "w_s_r.h"
#include "ui_w_s_r.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

w_s_r::w_s_r(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_s_r)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w2.png)");
   ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w3.png)");
   ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/w1.png)");
 ui->pushButton->setStyleSheet("backgroung-color:red");
   b.setParent(this);
   b.setText("BACK");
   b.move(420,200);
   connect(&b,&QPushButton::clicked,this,&w_s_r::sendslot);
   setWindowFlags(Qt::FramelessWindowHint);
   setAttribute(Qt::WA_TranslucentBackground);
   pic.load(tr(":/C:/Users/DELL/Desktop/aaaaa.png"));
   resize(1200,750);
   move(270,150);
}
void w_s_r::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void w_s_r::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void w_s_r::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void w_s_r::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void w_s_r::sendslot()
{
    emit wsrsignal();
}

w_s_r::~w_s_r()
{
    delete ui;
}

void w_s_r::on_pushButton_clicked()
{
    this->close();
}
