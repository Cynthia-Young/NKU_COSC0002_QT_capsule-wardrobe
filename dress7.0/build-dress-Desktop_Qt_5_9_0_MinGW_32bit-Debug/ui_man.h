/********************************************************************************
** Form generated from reading UI file 'man.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAN_H
#define UI_MAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_man
{
public:

    void setupUi(QWidget *man)
    {
        if (man->objectName().isEmpty())
            man->setObjectName(QStringLiteral("man"));
        man->resize(800, 600);

        retranslateUi(man);

        QMetaObject::connectSlotsByName(man);
    } // setupUi

    void retranslateUi(QWidget *man)
    {
        man->setWindowTitle(QApplication::translate("man", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class man: public Ui_man {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAN_H
