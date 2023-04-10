#ifndef CW_S_R_H
#define CW_S_R_H

#include <QWidget>

namespace Ui {
class cw_s_r;
}

class cw_s_r : public QWidget
{
    Q_OBJECT

public:
    explicit cw_s_r(QWidget *parent = 0);
    ~cw_s_r();

private:
    Ui::cw_s_r *ui;
};

#endif // CW_S_R_H
