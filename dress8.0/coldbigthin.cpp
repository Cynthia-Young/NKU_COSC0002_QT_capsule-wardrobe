#include "coldbigthin.h"
#include "ui_coldbigthin.h"
#include<QPainter>
#include<QPixmap>
#include<QBitmap>
#include<QLabel>
#include<QVBoxLayout>
#include <QPaintEvent>
#include <QToolButton>

coldbigthin::coldbigthin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldbigthin)
{
    ui->setupUi(this);
     ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic17.png)");
     ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic18.png)");
     ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic19.png)");
     ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic20.jpg)");
     b.setParent(this);
     b.setText("BACK");
     b.move(750,150);
     connect(&b,&QPushButton::clicked,this,&coldbigthin::sendslot);

     setWindowFlags(Qt::FramelessWindowHint);
     setAttribute(Qt::WA_TranslucentBackground);
     pic.load(tr(":/C:/Users/DELL/Desktop/coldpic.png"));
     resize(1500,750);
     move(100,150);
}
void coldbigthin::paintEvent(QPaintEvent *paintevent)
{
    paintevent->ignore();
    QPainter painter(this);
    painter.drawPixmap(0,0,pic);
}

void coldbigthin::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        m_Drag-true;
        m_DragPosition=event->globalPos()-this->pos();
        event->accept();
    }
}

void coldbigthin::mouseMoveEvent(QMouseEvent *event)
{
    if(m_Drag&&(event->buttons()&&Qt::LeftButton))
    {
        move(event->globalPos()-m_DragPosition);
        event->accept();
    }
}

void coldbigthin::mouseReleaseEvent(QMouseEvent *event)
{
    m_Drag=false;
}

void coldbigthin::sendslot()
{
    emit cbtsignal();
}
coldbigthin::~coldbigthin()
{
    delete ui;
}


void coldbigthin::on_pushButton_clicked()
{
    this->close();
}
