#ifndef W_S_T_H
#define W_S_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_s_t;
}

class w_s_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_s_t(QWidget *parent = 0);
    ~w_s_t();
signals:
    void wstsignal();
private:
    Ui::w_s_t *ui;
    QPushButton b;
};

#endif // W_S_T_H
