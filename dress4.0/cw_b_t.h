#ifndef CW_B_T_H
#define CW_B_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_b_t;
}

class cw_b_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_b_t(QWidget *parent = 0);
    ~cw_b_t();
signals:
    void cwbtsignal();
private:
    Ui::cw_b_t *ui;
    QPushButton b;
};

#endif // CW_B_T_H
