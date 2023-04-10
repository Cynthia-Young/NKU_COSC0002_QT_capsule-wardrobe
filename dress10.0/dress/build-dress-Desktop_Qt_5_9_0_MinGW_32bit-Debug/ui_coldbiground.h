/********************************************************************************
** Form generated from reading UI file 'coldbiground.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLDBIGROUND_H
#define UI_COLDBIGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coldbiground
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *coldbiground)
    {
        if (coldbiground->objectName().isEmpty())
            coldbiground->setObjectName(QStringLiteral("coldbiground"));
        coldbiground->resize(800, 600);
        scrollArea = new QScrollArea(coldbiground);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 10, 530, 570));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 530, 2200));
        scrollAreaWidgetContents->setMinimumSize(QSize(500, 500));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 211, 16));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 451, 131));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 190, 451, 211));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 410, 451, 101));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 520, 171, 16));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 550, 451, 251));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 810, 151, 16));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 830, 441, 281));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 1120, 211, 16));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 1140, 451, 251));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 1410, 271, 16));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 1430, 451, 231));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 1670, 72, 15));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 1690, 451, 241));
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 1940, 72, 15));
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 1970, 451, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(coldbiground);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 93, 28));
        pushButton_3 = new QPushButton(coldbiground);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 93, 28));

        retranslateUi(coldbiground);

        QMetaObject::connectSlotsByName(coldbiground);
    } // setupUi

    void retranslateUi(QWidget *coldbiground)
    {
        coldbiground->setWindowTitle(QApplication::translate("coldbiground", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coldbiground", "\344\275\240\351\200\202\345\220\210\347\232\204\351\243\216\346\240\274\346\230\257\346\260\224\345\234\272\345\245\263\347\216\213\351\243\216\346\240\274", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("coldbiground", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\244\247\351\252\250\346\236\266\345\234\206\350\272\253\346\235\220\345\245\263\346\200\247\347\211\271\350\264\250\345\276\210\345\274\272\343\200\201\346\210\220\347\206\237\345\272\246\350\276\203\351\253\230\357\274\214\346\234\200\345\245\275\347\234\213\347\232\204\347\212\266\346\200\201\346\201\260\346\201\260\346\230\257\346\212\212\351\202\243\344\273\275\345\244\247\346\260\224\345\245\263\346\200\247\346\204\237\345\261\225\347\216\260\345\207\272\346\235\245\347\232\204\346\227\266\345\200\231\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\211\200\344\273\245\345\271\266\344\270\215\351\200\202\345\220\210\345\207\271\344\270\200\344\272\233\345\271\274\346\200\201\347\232\204\343\200\201\345\217\257\347\210\261\351\243\216\351\200\240\345\236\213\343\200\202\346\257\224\345\246\202\345\250\203\345\250\203\351\242\206\343\200\201\347\231\276\350\244\266\345\260\217\347\237\255\350\243\231\357\274\214\346\225\210\346\236\234\345\276\200\345\276\200\344\274\232\346\257\224\350\276\203\350\277\235\345\222\214\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\271\237\345\260\275\351\207\217\351\201\277\345\205\215\347\251\277\350\277\220\345\212\250\344\274\221\351\227\262\351\243\216\357\274\214\344\274\232"
                        "\345\256\214\345\205\250\346\267\271\346\262\241\344\275\240\347\232\204\347\211\271\350\211\262\343\200\202\345\215\263\344\276\277\347\251\277\347\211\233\344\273\224\350\243\244\357\274\214\344\271\237\345\217\257\344\273\245\346\212\212\344\270\212\350\241\243\347\251\277\346\210\220\345\245\263\346\200\247\345\214\226\347\232\204\346\240\267\345\274\217\343\200\202</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("coldbiground", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\233\264\351\200\202\345\220\210\345\244\247\351\252\250\346\236\266\345\234\206\350\272\253\346\235\220\347\232\204\357\274\214\345\217\257\344\273\245\346\230\257\350\277\231\344\270\244\346\235\241\347\251\277\346\220\255\350\267\257\347\272\277\343\200\202\344\270\200\347\247\215\346\230\257\345\217\221\346\214\245\345\234\206\350\272\253\346\235\220\346\233\262\347\272\277\347\216\262\347\217\221\347\232\204\344\270\200\351\235\242\357\274\214\350\265\260\346\200\247\346\204\237\347\276\216\350\211\263\350\267\257\347\272\277\357\274\233\345\217\246\344\270"
                        "\200\347\247\215\346\230\257\345\217\221\346\214\245\345\244\247\351\207\217\346\204\237\350\272\253\345\275\242\350\213\261\346\260\224\347\232\204\344\270\200\351\235\242\357\274\214\350\265\260\347\250\263\351\207\215\350\201\214\345\234\272\351\243\216\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\211\215\344\270\200\347\247\215\347\232\204\347\276\216\346\204\237\346\233\264\346\234\211\345\206\262\345\207\273\345\212\233\357\274\214\344\270\273\350\246\201\346\230\257\346\224\276\345\244\247\350\264\265\346\260\224\347\232\204\347\211\271\350\264\250\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\220\216\344\270\200\347\247\215\346\257\224\350\276\203\345\210\251\350\220\275\345\220\253\350\223\204\357\274\214\346\233\264\351\200\202\345\220\210\346\227\245\345\270\270\345\222\214\350\201\214\345\234\272\343\200"
                        "\202</p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("coldbiground", "\346\200\247\346\204\237\347\276\216\350\211\263", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("coldbiground", "\351\225\277\347\272\277\346\235\241\345\242\236\345\212\240\351\253\230\350\264\265\346\204\237", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("coldbiground", "\351\200\211\346\213\251\350\211\262\345\275\251\351\262\234\344\272\256\347\232\204\345\244\247\351\207\217\346\204\237\351\242\234\350\211\262", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("coldbiground", "\350\243\205\351\245\260\347\211\251\351\200\211\346\213\251\345\244\247\345\235\227\345\215\260\350\212\261", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("coldbiground", "\345\276\241\345\247\220\350\267\257\347\272\277", Q_NULLPTR));
        label_12->setText(QString());
        label_15->setText(QApplication::translate("coldbiground", "\351\205\215\351\245\260\345\220\210\351\200\202", Q_NULLPTR));
        label_16->setText(QString());
        pushButton_2->setText(QApplication::translate("coldbiground", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("coldbiground", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coldbiground: public Ui_coldbiground {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLDBIGROUND_H
