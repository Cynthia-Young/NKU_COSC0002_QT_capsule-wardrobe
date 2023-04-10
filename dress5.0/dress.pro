#-------------------------------------------------
#
# Project created by QtCreator 2021-05-06T19:21:43
#
#-------------------------------------------------

QT       += core gui multimedia

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += resources_big
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dress
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    maindress.cpp \
    man.cpp \
    warmbone.cpp \
    coldbone.cpp \
    coldandwarm.cpp \
    coldbigthin.cpp \
    coldsmallthin.cpp \
    coldsmallroound.cpp \
    coldbiground.cpp \
    cw_b_r.cpp \
    cw_b_t.cpp \
    cw_s_t.cpp \
    cw_s_r.cpp \
    w_b_t.cpp \
    w_b_r.cpp \
    w_s_t.cpp \
    w_s_r.cpp \
    mybutton.cpp

HEADERS += \
        widget.h \
    maindress.h \
    man.h \
    warmbone.h \
    coldbone.h \
    coldandwarm.h \
    coldbigthin.h \
    coldsmallthin.h \
    coldsmallroound.h \
    coldbiground.h \
    cw_b_r.h \
    cw_b_t.h \
    cw_s_t.h \
    cw_s_r.h \
    w_b_t.h \
    w_b_r.h \
    w_s_t.h \
    w_s_r.h \
    mybutton.h

FORMS += \
        widget.ui \
    maindress.ui \
    man.ui \
    warmbone.ui \
    coldbone.ui \
    coldandwarm.ui \
    coldbigthin.ui \
    coldsmallthin.ui \
    coldsmallroound.ui \
    coldbiground.ui \
    cw_b_r.ui \
    cw_b_t.ui \
    cw_s_t.ui \
    cw_s_r.ui \
    w_b_t.ui \
    w_b_r.ui \
    w_s_t.ui \
    w_s_r.ui

RESOURCES += \
    picture.qrc

DISTFILES +=
