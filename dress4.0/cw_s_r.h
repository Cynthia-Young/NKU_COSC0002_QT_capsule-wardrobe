#ifndef CW_S_R_H
#define CW_S_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_s_r;
}

class cw_s_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_s_r(QWidget *parent = 0);
    ~cw_s_r();
signals:
    void cwsrsignal();
private:
    Ui::cw_s_r *ui;
    QPushButton b;
};

#endif // CW_S_R_H
