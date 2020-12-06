QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


DEFINES += QT_DEPRECATED_WARNINGS

TEMPLATE = app

SOURCES += \
    desk.cpp \
    game.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    desk.h \
    game.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    img.qrc
