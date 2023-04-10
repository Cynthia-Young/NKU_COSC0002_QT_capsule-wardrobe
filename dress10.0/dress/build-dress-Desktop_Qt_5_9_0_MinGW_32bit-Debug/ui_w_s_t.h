/********************************************************************************
** Form generated from reading UI file 'w_s_t.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_S_T_H
#define UI_W_S_T_H

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

class Ui_w_s_t
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
    QTextBrowser *textBrowser_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_5;
    QLabel *label_6;
    QTextBrowser *textBrowser_6;
    QLabel *label_7;
    QTextBrowser *textBrowser_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *w_s_t)
    {
        if (w_s_t->objectName().isEmpty())
            w_s_t->setObjectName(QStringLiteral("w_s_t"));
        w_s_t->resize(800, 600);
        w_s_t->setMinimumSize(QSize(800, 600));
        w_s_t->setMaximumSize(QSize(800, 600));
        scrollArea = new QScrollArea(w_s_t);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 10, 530, 570));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 700, 2000));
        scrollAreaWidgetContents->setMinimumSize(QSize(500, 50));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 181, 16));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 70, 221, 191));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 40, 221, 261));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 320, 461, 101));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 430, 451, 221));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 660, 461, 131));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 800, 451, 251));
        textBrowser_4 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(30, 1060, 461, 41));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 1110, 451, 201));
        textBrowser_5 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(30, 1320, 461, 61));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 1390, 461, 281));
        textBrowser_6 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(30, 1680, 461, 71));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 1770, 441, 221));
        textBrowser_7 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(60, 2070, 551, 41));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 2170, 471, 161));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(w_s_t);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 93, 28));
        pushButton_3 = new QPushButton(w_s_t);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 93, 28));

        retranslateUi(w_s_t);

        QMetaObject::connectSlotsByName(w_s_t);
    } // setupUi

    void retranslateUi(QWidget *w_s_t)
    {
        w_s_t->setWindowTitle(QApplication::translate("w_s_t", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("w_s_t", "\344\275\240\351\200\202\345\220\210\347\232\204\346\230\257\351\202\273\345\256\266\346\243\256\347\263\273\351\243\216", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\243\256\347\263\273\345\205\266\345\256\236\345\260\261\346\230\257\342\200\234\346\243\256\346\236\227\347\263\273\345\245\263\345\255\251\342\200\235\357\274\214\345\260\261\346\230\257\345\203\217\345\234\250\346\243\256\346\236\227\344\270\255\351\225\277\345\244\247\347\232\204\347\262\276\347\201\265\344\270\200\346\240\267\357\274\214\346\234\211\345\250\203\345\250\203\350\210\254\347\232\204\347\224\234\347\276\216\345\271\274\346\200\201\346\204\237\357\274\214\350\267\263\345\207\272\344\270\226\344\277\227\345\270\270\350\247\204\357\274\214\350\207"
                        "\252\347\204\266\345\244\251\347\234\237\344\270\215\345\201\232\344\275\234\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\347\247\215\351\243\216\346\240\274\344\274\232\350\256\251\344\272\272\350\247\211\345\276\227\345\245\275\346\216\245\350\277\221\357\274\214\345\260\261\345\203\217\351\202\273\345\256\266\345\245\263\345\255\251\344\270\200\346\240\267\343\200\202\350\231\275\347\204\266\345\222\214\347\216\260\345\234\250\344\270\273\346\265\201\350\277\275\346\261\202\347\232\204\347\262\276\350\207\264\346\204\237\344\270\215\344\270\200\346\240\267\357\274\214\344\275\206\345\276\210\346\234\211\350\276\250\350\257\206\345\272\246\357\274\214\345\276\210\351\200\202\345\220\210\346\200\247\346\240\274\346\257\224\350\276\203\346\237\224\345\222\214\344\275\216\350\260\203\347\232\204\345\245\263\347\224\237\343\200\202</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\211\210\345\236\213\345\244\232\346\230\257\345\256\275\346\235\276A\345\255\227</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\243\256\347\263\273\347\251\277\346\220\255\346\234\211\344\270\252\346\230\216\346\230\276\347\211\271\347\202\271\346\230\257\347\211\210\345\236\213\351\203\275\346\257\224\350\276\203\345\256\275\346\235\276\357\274\214\345\276\210\345\260\221\346\224\266\350\205\260\357\274\214\345\221\210\347\216\260\345\207\272\346\235\245\347\232\204\346\260"
                        "\224\350\264\250\345\276\210\350\207\252\347\204\266\357\274\214\346\262\241\346\234\211\344\277\256\350\272\253\345\215\225\345\223\201\345\207\271\345\207\270\346\234\211\350\207\264\347\232\204\345\210\273\346\204\217\346\204\237\357\274\214\347\273\231\344\272\272\344\270\200\347\247\215\351\232\217\346\204\217\350\210\222\345\261\225\347\232\204\346\204\237\350\247\211\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\215\212\350\243\231\343\200\201\345\244\226\345\245\227\343\200\201\344\270\212\350\241\243\344\271\237\345\201\217\347\210\261\350\277\231\347\247\215\345\256\275\346\235\276A\345\255\227\345\236\213\357\274\214\345\271\274\346\200\201\344\270\224\344\270\215\346\230\276\346\233\262\347\272\277</p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        textBrowser_3->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\237\224\350\275\257\351\225\277\347\272\277\346\235\241\357\274\214\346\235\220\350\264\250\345\244\251\347\204\266</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\243\256\347\263\273\351\243\216\344\271\237\346\234\211\347\247\215\351\243\230\351\200\270\346\226\207\350\211\272\347\232\204\346\260\224\350\264\250\357"
                        "\274\214\345\276\210\351\200\202\345\220\210\347\224\250\346\237\224\350\275\257\351\225\277\347\272\277\346\235\241\346\235\245\350\220\245\351\200\240\350\277\231\347\247\215\346\204\237\350\247\211\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\226\262 \344\270\215\350\277\207\344\270\252\345\255\220\345\244\252\345\260\217\347\232\204\350\257\235\346\234\200\345\245\275\346\263\250\346\204\217\344\270\200\344\270\213\350\205\260\347\272\277\357\274\214\347\234\213\350\265\267\346\235\245\346\262\241\351\202\243\344\271\210\346\235\276\345\236\256\343\200\202\346\257\224\345\246\202\347\251\277\345\256\275\346\235\276A\345\255\227\351\225\277\350\243\231\347\232\204\346\227\266\345\200\231\357\274\214\346\234\211\344\270\200\346\240\271\350\205\260\345\270\246\346\240\207\350\256\260\345\207\272\350\205\260\347\272\277\343\200\202\346\210\226\350\200\205\351\225\277\350\243\231+\345\244\226\345\245\227\347\232"
                        "\204\346\227\266\345\200\231\357\274\214\351\222\210\347\273\207\345\244\226\345\245\227\347\250\215\345\276\256\347\237\255\344\270\200\344\272\233\345\210\253\345\244\252\346\213\226\346\262\223\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
        textBrowser_4->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\235\220\350\264\250\346\234\200\345\245\275\351\200\211\346\243\211\351\272\273\343\200\201\347\276\212\346\257\233\347\276\212\347\273\222\357\274\214\350\275\257\347\263\257\350\275\273\346\237\224\346\233\264\346\234\211\351\202\273\345\256\266\346\204\237\357\274\214\345\220\214\346\227\266\344\271\237\346\257\224\350\276\203\345\244\251\347\204\266\357\274\214\346\233\264\345\256\271\346\230\223\347\252\201\345\207\272\346\243\256\347\263\273\347\232\204\346\260\233\345\233\264\357\274\232</p></body></html>", Q_NULLPTR));
        label_5->setText(QString());
        textBrowser_5->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\346\230\257\344\272\272\345\267\245\347\227\225\350\277\271\345\244\252\346\230\216\346\230\276\347\232\204\346\235\220\350\264\250\357\274\214\350\277\231\344\273\275\351\232\217\346\200\247\350\207\252\347\204\266\346\204\237\345\260\261\346\211\223\346\212\230\346\211\243\344\272\206\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\226\262 \345\203\217\347\211\233\344\273\224\346\235\220\350\264\250\344\270\215\344\273\205\347\241\254\346\234"
                        "\227\357\274\214\350\277\230\346\234\211\346\260\264\346\264\227\350\277\231\346\240\267\347\232\204\345\212\240\345\267\245\347\227\225\350\277\271\357\274\214\345\260\261\344\270\215\345\244\252\351\200\202\345\220\210\350\277\231\347\247\215\351\243\216\346\240\274\347\232\204\345\245\263\347\224\237\343\200\202</p></body></html>", Q_NULLPTR));
        label_6->setText(QString());
        textBrowser_6->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\344\272\233\346\243\256\347\263\273\345\205\203\347\264\240\357\274\214\350\277\231\346\240\267\347\251\277\346\211\215\344\270\215\344\274\232\350\277\207\346\227\266\350\200\201\345\234\237</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\211\215\351\235\242\344\271\237\350\257\264\350\277\207\357\274\214\351\202\273\345\256\266\346\243\256\347\263\273\351\243\216\345\276\210\345\226\234\346\254\242\344\270\200\344\272\233\347\211\271\345\256\232\345\205\203\347\264\240"
                        "\357\274\214\346\257\224\345\246\202\350\212\261\346\234\265\345\210\272\347\273\243\343\200\201\345\244\247\345\234\260\350\211\262\347\242\216\350\212\261\343\200\201\346\260\221\346\227\217\351\243\216\345\215\260\350\212\261\343\200\201\346\240\274\347\272\271\347\255\211\357\274\214\351\203\275\346\230\257\346\257\224\350\276\203\345\244\215\345\217\244\347\232\204\343\200\202</p></body></html>", Q_NULLPTR));
        label_7->setText(QString());
        textBrowser_7->setHtml(QApplication::translate("w_s_t", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\230\346\234\211\344\270\215\345\260\221\347\224\234\347\276\216\351\243\216\345\205\203\347\264\240\357\274\214\346\257\224\345\246\202\345\250\203\345\250\203\351\242\206\343\200\201\350\225\276\344\270\235\343\200\201\350\233\213\347\263\225\350\243\231\346\221\206\347\255\211\347\255\211\343\200\202</p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("w_s_t", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("w_s_t", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("w_s_t", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class w_s_t: public Ui_w_s_t {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_S_T_H
