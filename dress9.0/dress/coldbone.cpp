#include "coldbone.h"
#include "ui_coldbone.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

coldbone::coldbone(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldbone)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic13.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic14.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic15.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic16.jpg)");

    b.setParent(this);
    b.setText("BACK");
    b.move(400,220);

    connect(&b,&QPushButton::clicked,this,&coldbone::sendslot);

    connect(c3,SIGNAL(cbtsignal()),this,SLOT(dealcbt()));
    connect(c4,SIGNAL(cstsignal()),this,SLOT(dealcst()));
    connect(c5,SIGNAL(csrsignal()),this,SLOT(dealcsr()));
    connect(c6,SIGNAL(cbrsignal()),this,SLOT(dealcbr()));

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/aaaa.png"));
    resize(1600,1100);
    move(270,150);
}
void coldbone::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void coldbone::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void coldbone::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void coldbone::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void coldbone::dealcbt()
{
    c3->hide();
    show();
}
void coldbone::dealcst()
{
    c4->hide();
    show();
}

void coldbone::dealcsr()
{
    c5->hide();
    show();
}

void coldbone::dealcbr()
{
    c6->hide();
    show();
}

void coldbone::sendslot()
{
    emit coldbonesignal();
}

coldbone::~coldbone()
{
    delete ui;
}

void coldbone::on_radioButton_2_clicked(bool checked)
{
    this->close();
    c3->show();
}

void coldbone::on_radioButton_4_clicked(bool checked)
{
    this->close();
    c4->show();
}



void coldbone::on_radioButton_3_clicked(bool checked)
{
    this->close();
    c5->show();
}

void coldbone::on_radioButton_clicked(bool checked)
{
    this->close();
    c6->show();
}
