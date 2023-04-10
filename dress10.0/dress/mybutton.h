#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QObject>
#include"QPushbutton.h"

class MyButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyButton(QWidget *parent = nullptr);

signals:
protected:
    void mouseMoveEvent(QMouseEvent *e);
public slots:
};

#endif // MYBUTTON_H
