#-------------------------------------------------
#
# Project created by QtCreator 2019-06-12T11:37:01
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT+= serialport
QT  += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = feedDemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialrfid.cpp \
    winesql.cpp \
    seeform.cpp \
    comform.cpp \
    takenumberform.cpp \
    registerform.cpp \
    login.cpp \
    smtp.cpp \
    usersql.cpp \
    userregister.cpp

HEADERS  += mainwindow.h \
    datastruct.h \
    serialrfid.h \
    winesql.h \
    seeform.h \
    comform.h \
    takenumberform.h \
    registerform.h \
    login.h \
    smtp.h \
    usersql.h \
    userregister.h

FORMS    += mainwindow.ui \
    seeform.ui \
    takenumberform.ui \
    comform.ui \
    registerform.ui \
    login.ui \
    userregister.ui

unix|win32: LIBS += -L$$PWD/ -lReadDLL

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/

RESOURCES += \
    image.qrc
