#ifndef CW_B_R_H
#define CW_B_R_H

#include <QWidget>

namespace Ui {
class cw_b_r;
}

class cw_b_r : public QWidget
{
    Q_OBJECT

public:
    explicit cw_b_r(QWidget *parent = 0);
    ~cw_b_r();

private:
    Ui::cw_b_r *ui;
};

#endif // CW_B_R_H
