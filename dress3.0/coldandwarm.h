#ifndef COLDANDWARM_H
#define COLDANDWARM_H

#include <QWidget>
#include"cw_b_r.h"
#include"cw_b_t.h"
#include"cw_s_t.h"
#include"cw_s_r.h"

namespace Ui {
class coldandwarm;
}

class coldandwarm : public QWidget
{
    Q_OBJECT

public:
    explicit coldandwarm(QWidget *parent = 0);
    ~coldandwarm();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_radioButton_3_clicked(bool checked);

private:
    Ui::coldandwarm *ui;
    cw_b_r *h1=new cw_b_r ;
    cw_b_t *h2=new cw_b_t;
    cw_s_t *h3=new cw_s_t;
    cw_s_r *h4=new cw_s_r;

};

#endif // COLDANDWARM_H
