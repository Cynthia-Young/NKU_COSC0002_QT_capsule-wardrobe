#include "man.h"
#include "ui_man.h"

man::man(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::man)
{
    ui->setupUi(this);
}

man::~man()
{
    delete ui;
}
