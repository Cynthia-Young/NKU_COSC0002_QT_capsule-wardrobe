#ifndef COLDBIGROUND_H
#define COLDBIGROUND_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class coldbiground;
}

class coldbiground : public QWidget
{
    Q_OBJECT

public:
    void sendslot();
    explicit coldbiground(QWidget *parent = 0);
    ~coldbiground();
signals:
    void cbrsignal();
public slots:

private slots:
    void on_pushButton_clicked();

private:
    Ui::coldbiground *ui;
    QPushButton b;
    QPoint dragPosition;
    
private:
    QPixmap pic;
    virtual void paintEvent(QPaintEvent *paintevent);

    bool m_Drag;
    QPoint m_DragPosition;

    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

};

#endif // COLDBIGROUND_H
/*
class cbrlay:public QWidget
{
    Q_OBJECT
public:
    cbrlay(QWidget *parent=0);
    ~cbrlay();

protected:
    void paintEvent(QPaintEvent*);
signals:
private slots:
private:
    QPoint dragPosition;
};

//#endif //CBRLAY_H*/
