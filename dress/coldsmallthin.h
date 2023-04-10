#ifndef COLDSMALLTHIN_H
#define COLDSMALLTHIN_H

#include <QWidget>





namespace Ui {
class coldsmallthin;
}

class coldsmallthin : public QWidget
{
    Q_OBJECT

public:
    explicit coldsmallthin(QWidget *parent = 0);
    void sendslot();
    ~coldsmallthin();

signals:
    void mysignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::coldsmallthin *ui;

};

#endif // COLDSMALLTHIN_H
