#ifndef CW_S_T_H
#define CW_S_T_H

#include <QWidget>

namespace Ui {
class cw_s_t;
}

class cw_s_t : public QWidget
{
    Q_OBJECT

public:
    explicit cw_s_t(QWidget *parent = 0);
    ~cw_s_t();

private:
    Ui::cw_s_t *ui;
};

#endif // CW_S_T_H
