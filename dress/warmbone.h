#ifndef WARMBONE_H
#define WARMBONE_H

#include <QWidget>
#include"w_b_t.h"
#include"w_b_r.h"
#include"w_s_t.h"
#include"w_s_r.h"

namespace Ui {
class warmbone;
}

class warmbone : public QWidget
{
    Q_OBJECT

public:
    explicit warmbone(QWidget *parent = 0);
    ~warmbone();

private slots:
    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

private:
    Ui::warmbone *ui;
    w_b_t *w1=new w_b_t;
    w_b_r *w2=new w_b_r;
    w_s_t *w3=new w_s_t;
    w_s_r *w4=new w_s_r;
};

#endif // WARMBONE_H
