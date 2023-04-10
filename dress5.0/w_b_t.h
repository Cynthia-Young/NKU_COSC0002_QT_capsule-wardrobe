#ifndef W_B_T_H
#define W_B_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_b_t;
}

class w_b_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_b_t(QWidget *parent = 0);
    ~w_b_t();

signals:
    void wbtsignal();

private:
    Ui::w_b_t *ui;

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

#endif // W_B_T_H
