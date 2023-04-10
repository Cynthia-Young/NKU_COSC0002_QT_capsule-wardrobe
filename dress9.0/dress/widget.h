#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include"maindress.h"
#include"mybutton.h"
#include"man.h"
#include<QSound>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:


    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    MyButton *btn01;
    maindress *m=new maindress;
    man *n=new man;

};

#endif // WIDGET_H
