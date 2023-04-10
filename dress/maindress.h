#ifndef MAINDRESS_H
#define MAINDRESS_H

#include <QWidget>

#include"warmbone.h"
#include"coldandwarm.h"
#include"coldbone.h"


namespace Ui {
class maindress;
}

class maindress : public QWidget
{
    Q_OBJECT

public:
    explicit maindress(QWidget *parent = 0);
    ~maindress();
public slots:
    void dealslot();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_3_clicked(bool checked);


private:
    Ui::maindress *ui;
     warmbone *w=new warmbone;
     coldandwarm *c1=new coldandwarm;
     coldbone *c2=new coldbone;

};

#endif // MAINDRESS_H
