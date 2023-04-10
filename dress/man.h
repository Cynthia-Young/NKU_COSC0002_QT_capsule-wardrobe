#ifndef MAN_H
#define MAN_H

#include <QWidget>

namespace Ui {
class man;
}

class man : public QWidget
{
    Q_OBJECT

public:
    explicit man(QWidget *parent = 0);
    ~man();

private:
    Ui::man *ui;
};

#endif // MAN_H
