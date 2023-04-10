#ifndef W_B_R_H
#define W_B_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_b_r;
}

class w_b_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_b_r(QWidget *parent = 0);
    ~w_b_r();
signals:
    void wbrsignal();
private:
    Ui::w_b_r *ui;
    QPushButton b;
};

#endif // W_B_R_H
