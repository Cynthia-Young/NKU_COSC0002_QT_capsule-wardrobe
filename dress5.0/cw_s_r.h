#ifndef CW_S_R_H
#define CW_S_R_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_s_r;
}

class cw_s_r : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_s_r(QWidget *parent = 0);
    ~cw_s_r();
signals:
    void cwsrsignal();
private:
    Ui::cw_s_r *ui;
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

#endif // CW_S_R_H
