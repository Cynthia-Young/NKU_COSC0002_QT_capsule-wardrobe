#ifndef W_S_T_H
#define W_S_T_H

#include <QWidget>

namespace Ui {
class w_s_t;
}

class w_s_t : public QWidget
{
    Q_OBJECT

public:
    explicit w_s_t(QWidget *parent = 0);
    ~w_s_t();

private:
    Ui::w_s_t *ui;
};

#endif // W_S_T_H
