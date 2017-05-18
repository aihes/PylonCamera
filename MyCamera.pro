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


macx {
     message("Using Macx configuration")

    QT_CONFIG -= no-pkg-config
    CONFIG  += link_pkgconfig
    PKGCONFIG += opencv

    INCLUDEPATH += /opt/local/include
    LIBS += -L/opt/local/lib
    LIBS += -lboost_thread-mt -lboost_system-mt

    INCLUDEPATH += /Library/Frameworks/pylon.framework/Headers/GenICam
    LIBS += -F/Library/Frameworks -framework pylon
}

win32 {
     message("Using win32 configuration")


     INCLUDEPATH +=  D:\OpenCV2\opencv\build\include
     INCLUDEPATH +=  D:\OpenCV2\opencv\build\include\opencv
     INCLUDEPATH +=  D:\OpenCV2\opencv\build\include\opencv2

     INCLUDEPATH += D:\pylon5\Development\include
     LIBS += D:\pylon5\Development\lib\Win32

     OPENCV_PATH =  D:\OpenCV2\opencv
     LIBS_PATH = "$$OPENCV_PATH/build/x64/vc12/lib"
     LIBS += -L$$LIBS_PATH \
                -lopencv_core2413d \
                -lopencv_highgui2413d
}


RESOURCES += \
    images.qrc

DISTFILES += \
    config.json

