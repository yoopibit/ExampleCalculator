#-------------------------------------------------
#
# Project created by QtCreator 2016-08-06T23:38:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExampleCalculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    button.cpp \
    calculator.cpp

HEADERS  += mainwindow.h \
    calculator.h \
    button.h

FORMS    += mainwindow.ui
