#ifndef COLDSMALLROOUND_H
#define COLDSMALLROOUND_H

#include <QWidget>

namespace Ui {
class coldsmallroound;
}

class coldsmallroound : public QWidget
{
    Q_OBJECT

public:
    explicit coldsmallroound(QWidget *parent = 0);
    ~coldsmallroound();

private:
    Ui::coldsmallroound *ui;
};

#endif // COLDSMALLROOUND_H
