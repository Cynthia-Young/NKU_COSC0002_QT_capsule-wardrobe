#ifndef COLDSMALLROOUND_H
#define COLDSMALLROOUND_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class coldsmallroound;
}

class coldsmallroound : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldsmallroound(QWidget *parent = 0);
    ~coldsmallroound();
signals:
    void csrsignal();
private:
    Ui::coldsmallroound *ui;
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

#endif // COLDSMALLROOUND_H
