#ifndef COLDBIGTHIN_H
#define COLDBIGTHIN_H

#include <QWidget>



namespace Ui {
class coldbigthin;
}

class coldbigthin : public QWidget
{
    Q_OBJECT

public:
    explicit coldbigthin(QWidget *parent = 0);
    ~coldbigthin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::coldbigthin *ui;

};

#endif // COLDBIGTHIN_H
