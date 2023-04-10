#ifndef W_S_R_H
#define W_S_R_H

#include <QWidget>

namespace Ui {
class w_s_r;
}

class w_s_r : public QWidget
{
    Q_OBJECT

public:
    explicit w_s_r(QWidget *parent = 0);
    ~w_s_r();

private:
    Ui::w_s_r *ui;
};

#endif // W_S_R_H
