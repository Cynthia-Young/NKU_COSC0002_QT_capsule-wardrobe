#include "coldandwarm.h"
#include "ui_coldandwarm.h"

coldandwarm::coldandwarm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coldandwarm)
{
    ui->setupUi(this);
    ui->label_2->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic13.jpg)");
    ui->label_3->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic14.jpg)");
    ui->label_4->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic15.jpg)");
    ui->label_5->setStyleSheet("border-image:url(:/C:/Users/DELL/Desktop/pic16.jpg)");

    b.setParent(this);
    b.setText("BACK");
    b.move(70,70);

    connect(&b,&QPushButton::clicked,this,&coldandwarm::sendslot);

    connect(h1,SIGNAL(cwbrsignal()),this,SLOT(dealcwbr()));
    connect(h2,SIGNAL(cwbtsignal()),this,SLOT(dealcwbt()));
    connect(h3,SIGNAL(cwstsignal()),this,SLOT(dealcwst()));
    connect(h4,SIGNAL(cwsrsignal()),this,SLOT(dealcwsr()));
}

void coldandwarm::dealcwbr()
{
    h1->hide();
    show();
}
void coldandwarm::dealcwbt()
{
    h2->hide();
    show();
}
void coldandwarm::dealcwst()
{
    h3->hide();
    show();
}
void coldandwarm::dealcwsr()
{
    h4->hide();
    show();
}

void coldandwarm::sendslot()
{
    emit coldwarmbonesignal();
}

coldandwarm::~coldandwarm()
{
    delete ui;
}


void coldandwarm::on_radioButton_clicked(bool checked)
{
    this->close();
    h1->show();
}

void coldandwarm::on_radioButton_2_clicked(bool checked)
{
    this->close();
    h2->show();
}

void coldandwarm::on_radioButton_4_clicked(bool checked)
{
    this->close();
    h3->show();
}

void coldandwarm::on_radioButton_3_clicked(bool checked)
{
    this->close();
    h4->show();
}
