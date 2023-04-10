#ifndef COLDSMALLTHIN_H
#define COLDSMALLTHIN_H

#include <QWidget>
#include <QPushButton>




namespace Ui {
class coldsmallthin;
}

class coldsmallthin : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldsmallthin(QWidget *parent = 0);
    ~coldsmallthin();
signals:
    void cstsignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::coldsmallthin *ui;
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

#endif // COLDSMALLTHIN_H
