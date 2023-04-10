#include "maindress.h"
#include "ui_maindress.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

maindress::maindress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maindress)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic1.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic2.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic3.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/new/prefix1/C:/Users/DELL/Desktop/pic4.jpg)");
    ui->label_6->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic6.jpg)");
    ui->label_7->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic7.jpg)");
    ui->label_8->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic8.jpg)");
    ui->label_9->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic9.jpg)");
    ui->label_10->setStyleSheet("border-image:url(://C:/Users/DELL/Desktop/pic12.png)");

    connect(w,SIGNAL(warmbonesignal()),this,SLOT(dealwarmbone()));
    connect(c1,SIGNAL(coldwarmbonesignal()),this,SLOT(dealwarmcoldbone()));
    connect(c2,SIGNAL(coldbonesignal()),this,SLOT(dealcoldbone()));

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    pic.load(tr(":/C:/Users/DELL/Desktop/A.png"));
    resize(1500,1000);
    move(200,0);


}
void maindress::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void maindress::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void maindress::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void maindress::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}
maindress::~maindress()
{
    delete ui;
}



void maindress::on_radioButton_clicked()
{
    this->close();
    w->show();
}

void maindress::on_radioButton_2_clicked()
{
    this->close();
    c1->show();
}

void maindress::on_radioButton_3_clicked()
{
    this->close();
    c2->show();
}

void maindress::on_radioButton_clicked(bool checked)
{
    this->close();
    w->show();
}


void maindress::on_radioButton_2_clicked(bool checked)
{
    this->close();
    c1->show();
}

void maindress::on_radioButton_3_clicked(bool checked)
{
    this->close();
    c2->show();
}

void maindress::dealwarmbone()
{
   w->hide();
    show();
}

void maindress::dealwarmcoldbone()
{
    c1->hide();
    show();
}
void maindress::dealcoldbone()
{
    c2->hide();
    show();
}
