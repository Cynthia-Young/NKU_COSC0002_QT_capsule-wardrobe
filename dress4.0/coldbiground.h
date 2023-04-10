#ifndef COLDBIGROUND_H
#define COLDBIGROUND_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class coldbiground;
}

class coldbiground : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldbiground(QWidget *parent = 0);
    ~coldbiground();
signals:
    void cbrsignal();
private:
    Ui::coldbiground *ui;
    QPushButton b;
};

#endif // COLDBIGROUND_H
