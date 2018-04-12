#-------------------------------------------------
#
# Project created by QtCreator 2018-04-06T11:31:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Messenger
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    json.hpp

FORMS    += mainwindow.ui

CONFIG += c++11
