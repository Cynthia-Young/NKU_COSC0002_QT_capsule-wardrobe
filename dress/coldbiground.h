#ifndef COLDBIGROUND_H
#define COLDBIGROUND_H

#include <QWidget>

namespace Ui {
class coldbiground;
}

class coldbiground : public QWidget
{
    Q_OBJECT

public:
    explicit coldbiground(QWidget *parent = 0);
    ~coldbiground();

private:
    Ui::coldbiground *ui;
};

#endif // COLDBIGROUND_H
