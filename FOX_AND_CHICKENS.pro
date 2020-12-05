QT       += core gui opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


DEFINES += QT_DEPRECATED_WARNINGS

TEMPLATE = app

SOURCES += \
    desk.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    desk.h \
    mainwindow.h

FORMS += \
    mainwindow.ui
