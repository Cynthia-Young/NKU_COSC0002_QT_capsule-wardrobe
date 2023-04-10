#ifndef W_S_T_H
#define W_S_T_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class w_s_t;
}

class w_s_t : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit w_s_t(QWidget *parent = 0);
    ~w_s_t();
signals:
    void wstsignal();
private slots:
    void on_pushButton_clicked();

private:
    Ui::w_s_t *ui;
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

#endif // W_S_T_H
