#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <pylon/PylonIncludes.h>
#include <pylon/usb/BaslerUsbCamera.h>
#include <QMainWindow>
#include <pylon/PylonIncludes.h>
#include <boost/thread.hpp>
#include <opencv2/highgui.hpp>

#include <QEvent>
#include <QDebug>
#include <QtGui>
#include <QtCore>

#include "settings.h"


namespace Ui {
class MainWindow;
}

enum ConvolutionType {
/* Return the full convolution, including border */
  CONVOLUTION_FULL,

/* Return only the part that corresponds to the original image */
  CONVOLUTION_SAME,

/* Return only the submatrix containing elements that were not influenced by the border */
  CONVOLUTION_VALID
};

using namespace cv;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    virtual void closeEvent (QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    Pylon::CInstantCamera m_camera;
    Pylon::CPylonUsbTLParams usbCameraParam;
    GenApi::INodeMap *m_nodemap;
    QString FullNameOfSelectedDevice;
    Settings *saveSettings = new Settings();
    QJsonObject json;

    int imageSaved = 0;
    bool isAlgoAreaOpened = false;

    void setButtons(bool inPreview);
    void setNoCamera();
    void readJson();
    void temporal_LSI();
    Mat spatial_LSI(Mat speckle,int m);



private slots:
    void startPreview();
    void refresh();
    void setting();
    void about();
    void singleGrab();
    void multiGrab();
    void conv2(const Mat &img, const Mat& kernel, ConvolutionType type, Mat& dest);
    void algoArea();
    void spatial_LSI_Matlab();

};


#endif // MAINWINDOW_H
