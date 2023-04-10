#include "coldsmallthin.h"
#include "ui_coldsmallthin.h"
#include"maindress.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

coldsmallthin::coldsmallthin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldsmallthin)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold1.png)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold2.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold3.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold4.png)");
    ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold5.jpg)");
    ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold6.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold7.png)");
    ui->label_9->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold8.png)");
    ui->label_10->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold9.png)");
    ui->label_11->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/cold10.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(750,150);
    connect(&b,&QPushButton::clicked,this,&coldsmallthin::sendslot);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/coldpic.png"));
    resize(1500,750);
    move(100,150);

}
void coldsmallthin::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void coldsmallthin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void coldsmallthin::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void coldsmallthin::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void coldsmallthin::sendslot()
{
    emit cstsignal();
}

coldsmallthin::~coldsmallthin()
{
    delete ui;
}


