/********************************************************************************
** Form generated from reading UI file 'coldbigthin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLDBIGTHIN_H
#define UI_COLDBIGTHIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coldbigthin
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QLabel *label_3;
    QTextBrowser *textBrowser_5;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *coldbigthin)
    {
        if (coldbigthin->objectName().isEmpty())
            coldbigthin->setObjectName(QStringLiteral("coldbigthin"));
        coldbigthin->resize(800, 600);
        line = new QFrame(coldbigthin);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(390, 250, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(coldbigthin);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(390, 440, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(coldbigthin);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(380, 590, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(coldbigthin);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(240, 10, 530, 570));
        scrollArea->setMinimumSize(QSize(500, 570));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 1600));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 241, 21));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 461, 121));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(260, 250, 231, 81));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 180, 221, 241));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 440, 461, 51));
        textBrowser_4 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(30, 590, 201, 51));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 500, 241, 221));
        textBrowser_5 = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(30, 740, 461, 211));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 960, 461, 301));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 1280, 461, 321));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(coldbigthin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 170, 93, 28));
        pushButton_3 = new QPushButton(coldbigthin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 270, 93, 28));

        retranslateUi(coldbigthin);

        QMetaObject::connectSlotsByName(coldbigthin);
    } // setupUi

    void retranslateUi(QWidget *coldbigthin)
    {
        coldbigthin->setWindowTitle(QApplication::translate("coldbigthin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coldbigthin", "\344\275\240\351\200\202\345\220\210\347\232\204\346\230\257\346\254\247\347\276\216\347\256\200\347\272\246\345\244\247\346\260\224\351\243\216\346\240\274", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("coldbigthin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\344\275\240\346\230\257\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220\357\274\214\351\202\243\346\233\264\345\244\232\347\232\204\346\230\257\344\270\215\346\213\226\346\263\245\345\270\246\346\260\264\347\232\204\347\262\276\345\210\251\346\204\237\357\274\214\350\272\253\346\235\220\344\270\212\347\232\204\350\277\231\344\273\275\342\200\234\345\206\267\342\200\235\346\230\257\346\260\224\350\264\250\344\270\212\347\232\204\347\202\271\351\207\221\347\237\263\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin"
                        "-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\257\271\344\272\216\345\244\247\351\252\250\346\236\266\351\253\230\344\270\252\345\255\220\345\245\263\347\224\237\346\235\245\350\257\264\357\274\214\347\224\250\350\206\250\350\203\200\346\204\237\345\216\273\344\277\256\351\245\260\346\211\201\350\272\253\346\230\276\347\204\266\346\230\257\347\252\201\345\205\200\347\232\204\357\274\214\344\270\215\345\246\202\345\244\247\346\226\271\346\216\245\345\217\227\350\207\252\345\267\261\347\232\204\347\211\271\350\211\262\357\274\214\347\224\250\345\210\251\350\220\275\347\232\204\347\272\277\346\235\241\345\216\273\345\207\270\346\230\276\344\274\230\345\212\277\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\244\247\346\260\224\343\200\201\345\210\251\350\220\275\343\200\201\345\211\252\350\243\201\344\270\212\347\232\204\350\256\276\350\256\241\346\204\237\357\274\214\346"
                        "\230\257\350\277\231\344\270\200\347\261\273\345\245\263\347\224\237\347\232\204\347\251\277\346\220\255\345\205\263\351\224\256\350\257\215\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\215\263\344\274\230\345\205\210\351\200\211\346\213\251\345\215\225\344\270\200\345\244\247\350\211\262\345\235\227\357\274\214\345\260\275\351\207\217\351\201\277\345\205\215\345\217\257\347\210\261\345\271\274\346\200\201\357\274\214\345\260\235\350\257\225\350\256\276\350\256\241\346\204\237\345\211\252\350\243\201\343\200\202</p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("coldbigthin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\213\277KK\344\270\276\344\276\213\357\274\214\345\246\202\346\236\234\347\251\277\350\277\231\347\261\273\346\263\241\346\263\241\350\242\226\350\256\276\350\256\241\347\232\204\344\270\212\350\241\243\357\274\214\345\234\206\347\272\277\346\235\241\344\274\232\344\270\255\345\222\214\346\216\211\350\272\253\346\235\220\347\232\204\345\206\267\346\204\237\357\274\214\344\270\242\345\244\261\350\276\250\350\257\206\345\272\246\345\220\214\346\227\266\344\271\237\346\230\276\345\276\227\345\210\253\346\211\255\343\200\202</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        textBrowser_3->setHtml(QApplication::translate("coldbigthin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\220\214\346\240\267\347\272\277\346\235\241\345\210\251\350\220\275\344\271\237\351\235\236\345\270\270\351\207\215\350\246\201\357\274\214\346\235\276\345\236\256\344\274\221\351\227\262\347\232\204\345\215\225\345\223\201\344\271\237\344\274\232\346\267\271\346\262\241\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220\347\232\204\347\211\271\350\211\262\357\274\214\345\217\252\344\274\232\350\247\211\345\276\227\350\277\231\344\270\252\345\245\263\347\224\237\347\232\204\344\275\223\347\247\257\345\245\275\345\244\247\343\200\202</p></b"
                        "ody></html>", Q_NULLPTR));
        textBrowser_4->setHtml(QApplication::translate("coldbigthin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\226\262 2\344\270\252\346\235\276\345\236\256\345\215\225\345\223\201\347\232\204\351\224\231\350\257\257\347\244\272\350\214\203\357\274\214\346\267\271\346\262\241\344\272\206KK\347\232\204\350\272\253\346\235\220\344\272\256\347\202\271\343\200\202</p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        textBrowser_5->setHtml(QApplication::translate("coldbigthin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\272\277\346\235\241\345\210\251\350\220\275\347\232\204\345\215\225\345\223\201\357\274\214\346\211\215\350\203\275\350\241\254\345\276\227\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220\347\232\204\344\272\272\347\262\276\347\245\236\345\217\210\345\271\262\347\273\203\357\274\214\346\234\211\344\270\200\347\247\215\351\252\250\345\255\220\351\207\214\345\206\222\345\207\272\346\235\245\347\232\204\351\253\230\347\272\247\346\204\237\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\">\345\206\215\345\260\261\346\230\257\345\211\252\350\243\201\344\270\212\347\232\204\350\256\276\350\256\241\346\204\237\357\274\214\344\271\237\351\235\236\345\270\270\351\200\202\345\220\210\350\277\231\347\261\273\345\247\221\345\250\230\347\224\250\346\235\245\345\207\270\346\230\276\344\274\230\345\212\277\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\200\344\273\266\350\241\243\346\234\215\347\232\204\350\256\276\350\256\241\346\204\237\357\274\214\345\217\257\344\273\245\344\275\223\347\216\260\345\234\250\345\233\276\346\241\210\344\270\212\343\200\201\350\243\205\351\245\260\344\270\212\343\200\201\345\211\252\350\243\201\344\270\212\357\274\214\344\270\200\350\210\254\351\200\211\346\254\276\346\227\266"
                        "\357\274\214\351\203\275\345\273\272\350\256\256\351\200\211\350\256\276\350\256\241\345\205\203\347\264\240\345\260\221\347\232\204\357\274\214\351\207\215\347\202\271\345\234\250\344\270\200\345\244\204\345\260\261\350\241\214\343\200\202\345\257\271\344\272\216\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\245\350\257\264\357\274\214\345\217\252\351\200\211\346\213\251\345\211\252\350\243\201\344\270\212\347\232\204\350\256\276\350\256\241\346\204\237\346\230\257\346\234\200\344\274\230\347\232\204\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\244\247\351\252\250\346\236\266\346\211\201\350\272\253\346\235\220\346\234\254\346\235\245\345\260\261\347\273\231\344\272\272\351\253\230\347\230\246\346\227\266\351\253\246\347\232\204\345"
                        "\215\260\350\261\241\357\274\214\344\270\212\344\270\213\345\210\206\344\275\223\344\274\232\344\270\255\350\247\204\344\270\255\347\237\251\357\274\214\345\211\252\350\243\201\350\256\276\350\256\241\344\270\212\347\232\204\347\202\271\347\274\200\350\203\275\350\256\251\346\225\264\344\270\252\344\272\272\346\233\264\346\234\211\347\201\265\346\260\224\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\272\265\345\220\221\345\211\252\350\243\201\347\232\204\350\256\276\350\256\241\357\274\214\346\200\273\350\203\275\347\273\231\345\215\225\345\223\201\345\242\236\345\212\240\344\270\200\344\272\233\345\206\267\347\232\204\346\204\237\350\247\211\357\274\214\345\222\214\346\211\201\350\272\253\347\211\271\345\210\253\345\245\221\345\220\210\343\200\202</p></body></html>", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_2->setText(QApplication::translate("coldbigthin", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("coldbigthin", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coldbigthin: public Ui_coldbigthin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLDBIGTHIN_H
