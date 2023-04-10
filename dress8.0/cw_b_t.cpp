#include "cw_b_t.h"
#include "ui_cw_b_t.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

cw_b_t::cw_b_t(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cw_b_t)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb1.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb2.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb3.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb4.png)");
    ui->label_13->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb5.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb6.png)");
    ui->label_12->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb7.png)");
    ui->label_14->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cwb8.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(370,150);
    connect(&b,&QPushButton::clicked,this,&cw_b_t::sendslot);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/aaa.png"));
    resize(1200,750);
    move(270,150);
}
void cw_b_t::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void cw_b_t::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void cw_b_t::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void cw_b_t::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void cw_b_t::sendslot()
{
    emit cwbtsignal();
}
cw_b_t::~cw_b_t()
{
    delete ui;
}

void cw_b_t::on_pushButton_clicked()
{
    this->close();
}
