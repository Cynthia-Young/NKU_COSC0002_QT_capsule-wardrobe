#ifndef COLDBIGTHIN_H
#define COLDBIGTHIN_H

#include <QWidget>
#include <QPushButton>



namespace Ui {
class coldbigthin;
}

class coldbigthin : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldbigthin(QWidget *parent = 0);
    ~coldbigthin();

signals:
    void cbtsignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::coldbigthin *ui;
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

#endif // COLDBIGTHIN_H
