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

};

#endif // COLDBIGTHIN_H
