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
};

#endif // COLDSMALLROOUND_H
