#ifndef W_B_R_H
#define W_B_R_H

#include <QWidget>

namespace Ui {
class w_b_r;
}

class w_b_r : public QWidget
{
    Q_OBJECT

public:
    explicit w_b_r(QWidget *parent = 0);
    ~w_b_r();

private:
    Ui::w_b_r *ui;
};

#endif // W_B_R_H
