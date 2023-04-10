#ifndef CW_S_T_H
#define CW_S_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class cw_s_t;
}

class cw_s_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit cw_s_t(QWidget *parent = 0);
    ~cw_s_t();
signals:
    void cwstsignal();
private slots:
    void on_pushButton_clicked();

private:
    Ui::cw_s_t *ui;
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

#endif // CW_S_T_H
