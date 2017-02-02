#-------------------------------------------------
#
# Project created by QtCreator 2013-09-18T14:36:49
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Asn1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    city.cpp \
    stub.cpp \
    qcustomplot.cpp \
    start.cpp

HEADERS  += mainwindow.h \
    city.h \
    stub.h \
    qcustomplot.h \
    start.h

FORMS    += mainwindow.ui \
    start.ui
