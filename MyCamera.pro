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


RESOURCES += \
    images.qrc

DISTFILES += \
    config.json


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
     LIBS += -L"D:\pylon5\Development\lib\x64"

     LIBS += -lGCBase_MD_VC120_v3_0_Basler_pylon_v5_0 \
            -lGenApi_MD_VC120_v3_0_Basler_pylon_v5_0 \
            -lPylonBase_MD_VC120_v5_0   \
            -lPylonC_MD_VC120  \
            -lPylonGUI_MD_VC120_v5_0  \
            -lPylonUtility_MD_VC120_v5_0

     OPENCV_PATH =  D:\OpenCV2\opencv
     LIBS_PATH = "$$OPENCV_PATH/build/x64/vc12/lib"
     LIBS += -L$$LIBS_PATH \
                -lopencv_core2413d \
                -lopencv_imgproc2413d	\
                -lopencv_photo2413d	\
                -lopencv_ml2413d	\
                -lopencv_calib3d2413d	\
                -lopencv_contrib2413d	\
                -lopencv_features2d2413d	\
                -lopencv_flann2413d	\
                -lopencv_gpu2413d	\
                -lopencv_legacy2413d	\
                -lopencv_objdetect2413d	\
                -lopencv_ts2413d	\
                -lopencv_video2413d	\
                -lopencv_nonfree2413d	\
                -lopencv_ocl2413d	\
                -lopencv_stitching2413d	\
                -lopencv_superres2413d	\
                -lopencv_videostab2413d	\
                -lopencv_highgui2413d
}


