#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T08:50:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyCamera
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myfram.cpp \
    settings.cpp \
    settingdialog.cpp \
    aboutdialog.cpp

HEADERS  += mainwindow.h \
    myfram.h \
    settings.h \
    settingdialog.h \
    aboutdialog.h

FORMS    += mainwindow.ui \
    myfram.ui \
    settingdialog.ui \
    aboutdialog.ui

QT_CONFIG -= no-pkg-config
CONFIG  += link_pkgconfig
PKGCONFIG += opencv

INCLUDEPATH += /opt/local/include
LIBS += -L/opt/local/lib
LIBS += -lboost_thread-mt -lboost_system-mt

INCLUDEPATH += /Library/Frameworks/pylon.framework/Headers/GenICam
LIBS += -F/Library/Frameworks -framework pylon

RESOURCES += \
    images.qrc

DISTFILES += \
    config.json
