#include "coldsmallroound.h"
#include "ui_coldsmallroound.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

coldsmallroound::coldsmallroound(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldsmallroound)
{
    ui->setupUi(this);
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p1.png)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p2.png)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p3.png)");
   ui->label_6->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p4.png)");
   ui->label_7->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p5.png)");
    ui->label_8->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/p6.png)");
    b.setParent(this);
    b.setText("BACK");
    b.move(750,150);
    connect(&b,&QPushButton::clicked,this,&coldsmallroound::sendslot);

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/coldpic.png"));
    resize(1500,750);
    move(100,150);

}

void coldsmallroound::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void coldsmallroound::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void coldsmallroound::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void coldsmallroound::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
void coldsmallroound::sendslot()
{
    emit csrsignal();
}
coldsmallroound::~coldsmallroound()
{
    delete ui;
}

void coldsmallroound::on_pushButton_clicked()
{
    this->close();
}
