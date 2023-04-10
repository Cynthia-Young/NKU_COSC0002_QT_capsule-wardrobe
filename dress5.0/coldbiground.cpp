#include "coldbiground.h"
#include "ui_coldbiground.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>
/*
cbrlay::cbrlay(QWidget *parent):QWidget(parent)
{
    QPixmap pix;
    pix.load(":/C:/Users/DELL/Desktop/f1.png",0,Qt::AvoidDither|Qt::ThresholdAlphaDither|Qt::ThresholdAlphaDither);
    resize(pix.size());

    setMask(QBitmap(pix.mask()));

    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->setContentsMargins(50,30,0,20);
    /*layout->addWidget(label1);
    layout->addWidget(label2);
    layout->addWidget(label3);
    layout->addWidget(label4);
    layout->addWidget(label5);
    layout->addWidget(label6);
    layout->addWidget(label7);
    layout->addWidget(label8);
    layout->addWidget(label9);
    layout->addWidget(label10);
    layout->addWidget(label11);
    layout->addWidget(label12);
    setFixedSize(128,128);
}

void cbrlay::paintEvent(QPaintEvent * event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap(":/C:/Users/DELL/Desktop/f1.png"));

}

cbrlay::~cbrlay()
{

}*/

coldbiground::coldbiground(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldbiground)
{
    ui->setupUi(this);

     ui->label_16->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q8.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q2.jpg)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q3.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q4.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q5.png)");
    ui->label_12->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q6.png)");
    //ui->label_14->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q7.png)");
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/q1.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(700,150);
    connect(&b,&QPushButton::clicked,this,&coldbiground::sendslot);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/coldpic.png"));
    resize(1500,750);
    move(100,150);

    /*int wide = width();
    QToolButton *closeButton= new QToolButton(this);
    QPixmap closePix;
    closePix.load(tr(":/C:/Users/DELL/Desktop/cloose.png"));
    closeButton->setIcon(closePix);
    closeButton->setGeometry(wide-104,180,35,35);
    closeButton->setToolTip(tr("关闭"));
    closeButton->setStyleSheet("background-color:transparent;");
    connect(closeButton,SIGNAL(clicked),this,SLOT(close()));*/

}

void coldbiground::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void coldbiground::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void coldbiground::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void coldbiground::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}

void coldbiground::sendslot()
{
    emit cbrsignal();
}

coldbiground::~coldbiground()
{
    delete ui;
}
