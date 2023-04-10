#ifndef CW_S_T_H
#define CW_S_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_s_t;
}

class cw_s_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_s_t(QWidget *parent = 0);
    ~cw_s_t();
signals:
    void cwstsignal();
private:
    Ui::cw_s_t *ui;
    QPushButton b;
};

#endif // CW_S_T_H
