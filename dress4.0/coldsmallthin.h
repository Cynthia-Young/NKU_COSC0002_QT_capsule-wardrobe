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

};

#endif // COLDSMALLTHIN_H
