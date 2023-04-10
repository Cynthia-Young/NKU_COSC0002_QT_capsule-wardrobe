#ifndef W_B_R_H
#define W_B_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_b_r;
}

class w_b_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_b_r(QWidget *parent = 0);
    ~w_b_r();
signals:
    void wbrsignal();
private:
    Ui::w_b_r *ui;
    QPushButton b;
private:
      QPoint dragPosition;
    QPixmap pic;
    virtual void paintEvent(QPaintEvent *paintevent);

    bool m_Drag;
    QPoint m_DragPosition;

    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
};

#endif // W_B_R_H
