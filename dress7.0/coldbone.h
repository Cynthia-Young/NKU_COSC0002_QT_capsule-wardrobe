#ifndef COLDBONE_H
#define COLDBONE_H

#include <QWidget>
#include"coldbigthin.h"
#include"coldsmallthin.h"
#include"coldsmallroound.h"
#include"coldbiground.h"
#include <QPushButton>

namespace Ui {
class coldbone;
}

class coldbone : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldbone(QWidget *parent = 0);
    ~coldbone();

signals:
    void coldbonesignal();

public slots:
    void dealcbt();
    void dealcst();
    void dealcsr();
    void dealcbr();

private slots:
    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_pushButton_clicked();

    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_clicked(bool checked);

private:
    Ui::coldbone *ui;
    coldbigthin *c3=new coldbigthin;
      coldsmallthin *c4=new coldsmallthin;
coldsmallroound *c5=new coldsmallroound;
coldbiground *c6=new coldbiground;

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

#endif // COLDBONE_H
