/********************************************************************************
** Form generated from reading UI file 'w_b_t.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_B_T_H
#define UI_W_B_T_H

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

class Ui_w_b_t
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *w_b_t)
    {
        if (w_b_t->objectName().isEmpty())
            w_b_t->setObjectName(QStringLiteral("w_b_t"));
        w_b_t->resize(800, 600);
        w_b_t->setMinimumSize(QSize(800, 600));
        w_b_t->setMaximumSize(QSize(800, 600));
        scrollArea = new QScrollArea(w_b_t);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 10, 530, 570));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 1200));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 221, 16));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 461, 101));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 160, 441, 231));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 410, 461, 131));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 550, 461, 291));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 850, 461, 81));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 950, 461, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(w_b_t);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 93, 28));
        pushButton_3 = new QPushButton(w_b_t);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 93, 28));

        retranslateUi(w_b_t);

        QMetaObject::connectSlotsByName(w_b_t);
    } // setupUi

    void retranslateUi(QWidget *w_b_t)
    {
        w_b_t->setWindowTitle(QApplication::translate("w_b_t", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("w_b_t", "\344\275\240\351\200\202\345\220\210\347\232\204\351\243\216\346\240\274\346\230\257\344\274\230\351\233\205\345\245\263\347\245\236\351\243\216", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("w_b_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\226\215 \350\211\262\345\275\251\347\256\200\345\215\225\345\217\210\346\270\251\346\237\224</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\274\230\351\233\205\351\243\216\344\270\215\345\244\252\351\200\202\345\220\210\345\244\215\346\235\202\345\233\276\346\241\210\357\274\214\347\211\271\345\210\253\346\230\257\351"
                        "\242\234\350\211\262\350\277\230\345\201\217\346\232\227\347\232\204\350\257\235\357\274\214\347\234\213\350\265\267\346\235\245\345\260\261\345\256\271\346\230\223\346\234\211\347\247\215\345\244\247\345\246\210\346\204\237\343\200\202 \346\234\200\346\226\271\344\276\277\347\232\204\346\230\257\347\224\250\345\244\247\350\211\262\345\235\227\357\274\214\347\273\231\344\272\272\344\270\200\347\247\215\344\270\215\351\252\204\344\270\215\350\272\201\347\232\204\346\262\211\351\235\231\346\204\237\357\274\214\346\234\200\347\254\246\345\220\210\344\274\230\351\233\205\346\260\224\350\264\250\343\200\202</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("w_b_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\203\263\350\246\201\346\230\276\345\271\264\350\275\273\357\274\214\351\205\215\350\211\262\345\276\210\351\207\215\350\246\201\343\200\202\345\205\266\345\256\236\345\276\210\345\244\232\345\275\251\350\211\262\351\203\275\345\217\257\344\273\245\345\212\240\345\205\245\350\277\233\346\235\245\357\274\214\350\256\251\345\237\272\347\241\200\350\211\262\346\262\241\351\202\243\344\271\210\345\215\225\350\260\203\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\206"
                        "\344\270\215\347\224\250\345\203\217\346\264\273\346\263\274\346\204\237\343\200\201\344\277\217\344\270\275\351\243\216\347\232\204\345\275\251\345\272\246\351\202\243\344\271\210\351\253\230\357\274\214\346\233\264\351\200\202\345\220\210\351\200\211\347\272\257\345\272\246\344\275\216\344\270\200\347\202\271\347\232\204\357\274\214\346\233\264\346\234\211\346\262\211\347\250\263\347\237\245\346\200\247\346\204\237\357\274\232</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\226\262 \344\270\212\344\270\200\346\216\222\351\200\202\345\220\210\344\274\230\351\233\205\347\237\245\346\200\247\351\243\216\357\274"
                        "\214\344\270\213\344\270\200\346\216\222\347\232\204\345\275\251\345\272\246\345\260\261\346\230\216\346\230\276\346\233\264\351\253\230\344\272\206\343\200\202</p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        textBrowser_3->setHtml(QApplication::translate("w_b_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\246\345\244\226\357\274\214\346\235\220\350\264\250\344\270\212\345\276\256\345\276\256\347\232\204\345\205\211\346\263\275\346\204\237\357\274\214\344\271\237\345\276\210\345\256\271\346\230\223\346\234\211\344\274\230\351\233\205\346\270\251\346\266\246\347\232\204\346\204\237\350\247\211\343\200\202\344\271\237\350\203\275\350\256\251\350\277\231\347\247\215\346\265\205\350\211\262\347\234\213\350\265\267\346\235\245\345\270\246\347\202\271\350\264\265\346\260\224\357\274\214\345\214\272\345\210\253\344\272\216\345\260\217\346\270\205\346\226\260\343\200"
                        "\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\210\226\350\200\205\351\200\211\346\213\251\344\270\200\344\272\233\346\213\274\350\211\262\350\256\276\350\256\241\347\232\204\345\215\225\345\223\201\357\274\214\345\242\236\345\212\240\344\270\200\347\202\271\346\227\266\345\260\232\345\272\246\343\200\202</p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("w_b_t", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("w_b_t", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class w_b_t: public Ui_w_b_t {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_B_T_H
