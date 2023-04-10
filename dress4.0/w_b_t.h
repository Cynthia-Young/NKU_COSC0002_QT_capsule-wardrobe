#ifndef W_B_T_H
#define W_B_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_b_t;
}

class w_b_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_b_t(QWidget *parent = 0);
    ~w_b_t();

signals:
    void wbtsignal();

private:
    Ui::w_b_t *ui;

    QPushButton b;
};

#endif // W_B_T_H
