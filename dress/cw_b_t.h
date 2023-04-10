#ifndef CW_B_T_H
#define CW_B_T_H

#include <QWidget>

namespace Ui {
class cw_b_t;
}

class cw_b_t : public QWidget
{
    Q_OBJECT

public:
    explicit cw_b_t(QWidget *parent = 0);
    ~cw_b_t();

private:
    Ui::cw_b_t *ui;
};

#endif // CW_B_T_H
