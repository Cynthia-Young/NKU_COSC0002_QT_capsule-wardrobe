/********************************************************************************
** Form generated from reading UI file 'coldandwarm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLDANDWARM_H
#define UI_COLDANDWARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coldandwarm
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *coldandwarm)
    {
        if (coldandwarm->objectName().isEmpty())
            coldandwarm->setObjectName(QStringLiteral("coldandwarm"));
        coldandwarm->resize(800, 600);
        pushButton_2 = new QPushButton(coldandwarm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 93, 28));
        pushButton_3 = new QPushButton(coldandwarm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 93, 28));
        scrollArea = new QScrollArea(coldandwarm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 10, 530, 570));
        scrollArea->setMinimumSize(QSize(20, 20));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 530, 1000));
        scrollAreaWidgetContents->setMinimumSize(QSize(500, 1000));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 171, 16));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 180, 211, 251));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 180, 221, 251));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 540, 211, 271));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 540, 221, 271));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 820, 431, 16));
        radioButton = new QRadioButton(scrollAreaWidgetContents);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 850, 115, 19));
        radioButton_2 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 890, 115, 19));
        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(250, 850, 171, 19));
        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(250, 890, 171, 19));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 50, 451, 121));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 440, 451, 91));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(coldandwarm);

        QMetaObject::connectSlotsByName(coldandwarm);
    } // setupUi

    void retranslateUi(QWidget *coldandwarm)
    {
        coldandwarm->setWindowTitle(QApplication::translate("coldandwarm", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("coldandwarm", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("coldandwarm", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("coldandwarm", "\350\272\253\346\235\220\351\243\216\346\240\274=\350\272\253\346\235\220+\351\252\250\346\236\266", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QApplication::translate("coldandwarm", "\347\273\274\345\220\210\350\200\203\350\231\221\344\275\240\347\232\204\350\272\253\346\235\220\347\261\273\345\236\213\344\270\216\351\252\250\351\252\274\347\261\273\345\236\213\357\274\214\351\200\211\346\213\251\344\275\240\347\232\204\350\272\253\346\235\220\351\243\216\346\240\274\346\230\257\357\274\237", Q_NULLPTR));
        radioButton->setText(QApplication::translate("coldandwarm", "\345\244\247\351\252\250\346\236\266\345\234\206\350\272\253\346\235\220", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("coldandwarm", "\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("coldandwarm", "\345\260\217/\344\270\255\347\255\211\351\252\250\346\236\266\345\234\206\350\272\253\346\235\220", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("coldandwarm", "\345\260\217/\344\270\255\347\255\211\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220", Q_NULLPTR));
        textBrowser_3->setHtml(QApplication::translate("coldandwarm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\240\346\230\257\345\234\206\350\272\253\357\274\214\350\277\230\346\230\257\346\211\201\350\272\253\357\274\237</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\210\345\234\206\350\272\253\344\276\247\351\235\242\347\234\213\345\234\206\346\266\246\357\274\214\350\203\270\350\205\224\345\216\232\345\272\246\345"
                        "\244\247\357\274\214\350\203\214\351\203\250\357\274\214\350\202\251\350\203\233\350\204\202\350\202\252\345\244\232\343\200\202\346\211\213\350\205\225\345\234\206\346\266\246\357\274\214\346\211\213\350\202\230\347\272\277\346\235\241\346\265\201\347\225\205\357\274\214\347\230\246\344\272\206\344\271\237\344\270\215\344\274\232\345\271\262\347\230\246</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\211\201\350\272\253\344\276\247\351\235\242\346\211\201\345\271\263\357\274\214\350\203\270\350\205\224\345\216\232\345\272\246\345\260\217\357\274\214\350\203\214\351\203\250\350\204\202\350\202\252\345\260\221\357\274\214\346\211\213\350\205\225\346\211\213\350\202\230\351\252\250\351\252\274\346\204\237\346\230\216\346\230\276\343\200\202\346\260\224\350\264\250\345\201\217\347\226\217\347\246\273\345\206\267\346\267\241\357\274\211</p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("coldandwarm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\240\346\230\257\345\244\247\351\252\250\346\236\266\357\274\214\350\277\230\346\230\257\345\260\217\351\252\250\346\236\266\357\274\237</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\357\274\210\347\273\274\345\220\210\350\200\203\350\231\221\350\202\251\345\256\275\357\274\214\350\203\270\350\205\224\345\256\275\345"
                        "\272\246\357\274\214\350\203\257\345\256\275\357\274\214\350\266\212\345\256\275\350\266\212\346\216\245\350\277\221\345\244\247\351\252\250\346\236\266\357\274\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\220\214\346\227\266\350\200\203\350\231\221\350\272\253\351\253\230\345\233\240\347\264\240\357\274\214\344\270\252\345\255\220\347\237\256\347\232\204\345\245\263\347\224\237\346\233\264\345\201\217\345\220\221\346\234\211\345\260\217\351\252\250\346\236\266\357\274\214\344\275\206\344\271\237\346\234\211\347\211\271\346\256\212\346\203\205\345\206\265\357\274\211</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coldandwarm: public Ui_coldandwarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLDANDWARM_H
