#ifndef W_B_T_H
#define W_B_T_H

#include <QWidget>

namespace Ui {
class w_b_t;
}

class w_b_t : public QWidget
{
    Q_OBJECT

public:
    explicit w_b_t(QWidget *parent = 0);
    ~w_b_t();

private:
    Ui::w_b_t *ui;
};

#endif // W_B_T_H
