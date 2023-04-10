#include "w_s_t.h"
#include "ui_w_s_t.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

w_s_t::w_s_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_s_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u2.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u3.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u4.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u5.png)");
    ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u6.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/u7.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(420,200);
    connect(&b,&QPushButton::clicked,this,&w_s_t::sendslot);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/aaaaa.png"));
    resize(1200,750);
    move(270,150);
}
void w_s_t::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void w_s_t::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void w_s_t::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void w_s_t::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void w_s_t::sendslot()
{
    emit wstsignal();
}

w_s_t::~w_s_t()
{
    delete ui;
}

void w_s_t::on_pushButton_clicked()
{
    this->close();
}
