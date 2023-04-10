#ifndef W_S_R_H
#define W_S_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_s_r;
}

class w_s_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_s_r(QWidget *parent = 0);
    ~w_s_r();
signals:
    void wsrsignal();
private:
    Ui::w_s_r *ui;
    QPushButton b;
};

#endif // W_S_R_H
