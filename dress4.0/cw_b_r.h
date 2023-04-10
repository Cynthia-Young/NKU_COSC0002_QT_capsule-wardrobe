#ifndef CW_B_R_H
#define CW_B_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_b_r;
}

class cw_b_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_b_r(QWidget *parent = 0);
    ~cw_b_r();
signals:
    void cwbrsignal();
private:
    Ui::cw_b_r *ui;
    QPushButton b;
};

#endif // CW_B_R_H
