/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreview;
    QAction *actionCollectSingle;
    QAction *actionCollectMulti;
    QAction *actionSetting;
    QAction *actionAbout;
    QAction *actionRefresh;
    QAction *actionSpaceAlgo;
    QAction *actionCloseAlgo;
    QWidget *centralWidget;
    QLabel *destDisplay;
    QFrame *srcFrame;
    QWidget *layoutWidget;
    QVBoxLayout *srcVerticalLayout;
    QLabel *srcHeader;
    QLabel *srcDisplay;
    QHBoxLayout *srcBottomhorizontalLayout;
    QHBoxLayout *sizehorizontalLayout;
    QLabel *sizeLabel;
    QLabel *sizeValue;
    QHBoxLayout *scalehorizontalLayout;
    QLabel *scaleLabel;
    QLabel *scaleValue;
    QHBoxLayout *collectionhorizontalLayout;
    QLabel *collectionLabel;
    QLabel *collectionValue;
    QHBoxLayout *fpshorizontalLayout;
    QLabel *fpsLabel;
    QLabel *fpsValue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1087, 629);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionPreview = new QAction(MainWindow);
        actionPreview->setObjectName(QStringLiteral("actionPreview"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/play_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreview->setIcon(icon);
        actionCollectSingle = new QAction(MainWindow);
        actionCollectSingle->setObjectName(QStringLiteral("actionCollectSingle"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/OneShot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollectSingle->setIcon(icon1);
        actionCollectMulti = new QAction(MainWindow);
        actionCollectMulti->setObjectName(QStringLiteral("actionCollectMulti"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/ContinuousShot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollectMulti->setIcon(icon2);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/settings_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/get_info_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/refresh_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon5);
        actionSpaceAlgo = new QAction(MainWindow);
        actionSpaceAlgo->setObjectName(QStringLiteral("actionSpaceAlgo"));
        actionCloseAlgo = new QAction(MainWindow);
        actionCloseAlgo->setObjectName(QStringLiteral("actionCloseAlgo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(684, 550));
        centralWidget->setMaximumSize(QSize(1120, 550));
        destDisplay = new QLabel(centralWidget);
        destDisplay->setObjectName(QStringLiteral("destDisplay"));
        destDisplay->setGeometry(QRect(680, 10, 381, 331));
        srcFrame = new QFrame(centralWidget);
        srcFrame->setObjectName(QStringLiteral("srcFrame"));
        srcFrame->setGeometry(QRect(10, 10, 661, 531));
        srcFrame->setFrameShape(QFrame::StyledPanel);
        srcFrame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(srcFrame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 661, 531));
        srcVerticalLayout = new QVBoxLayout(layoutWidget);
        srcVerticalLayout->setSpacing(6);
        srcVerticalLayout->setContentsMargins(11, 11, 11, 11);
        srcVerticalLayout->setObjectName(QStringLiteral("srcVerticalLayout"));
        srcVerticalLayout->setContentsMargins(0, 0, 0, 0);
        srcHeader = new QLabel(layoutWidget);
        srcHeader->setObjectName(QStringLiteral("srcHeader"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(srcHeader->sizePolicy().hasHeightForWidth());
        srcHeader->setSizePolicy(sizePolicy1);
        srcHeader->setStyleSheet(QStringLiteral("width: 100%;"));
        srcHeader->setAlignment(Qt::AlignCenter);

        srcVerticalLayout->addWidget(srcHeader);

        srcDisplay = new QLabel(layoutWidget);
        srcDisplay->setObjectName(QStringLiteral("srcDisplay"));
        sizePolicy1.setHeightForWidth(srcDisplay->sizePolicy().hasHeightForWidth());
        srcDisplay->setSizePolicy(sizePolicy1);
        srcDisplay->setMinimumSize(QSize(0, 0));
        srcDisplay->setAutoFillBackground(false);
        srcDisplay->setStyleSheet(QStringLiteral(""));

        srcVerticalLayout->addWidget(srcDisplay);

        srcBottomhorizontalLayout = new QHBoxLayout();
        srcBottomhorizontalLayout->setSpacing(0);
        srcBottomhorizontalLayout->setObjectName(QStringLiteral("srcBottomhorizontalLayout"));
        sizehorizontalLayout = new QHBoxLayout();
        sizehorizontalLayout->setSpacing(6);
        sizehorizontalLayout->setObjectName(QStringLiteral("sizehorizontalLayout"));
        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        sizehorizontalLayout->addWidget(sizeLabel);

        sizeValue = new QLabel(layoutWidget);
        sizeValue->setObjectName(QStringLiteral("sizeValue"));

        sizehorizontalLayout->addWidget(sizeValue);


        srcBottomhorizontalLayout->addLayout(sizehorizontalLayout);

        scalehorizontalLayout = new QHBoxLayout();
        scalehorizontalLayout->setSpacing(6);
        scalehorizontalLayout->setObjectName(QStringLiteral("scalehorizontalLayout"));
        scaleLabel = new QLabel(layoutWidget);
        scaleLabel->setObjectName(QStringLiteral("scaleLabel"));

        scalehorizontalLayout->addWidget(scaleLabel);

        scaleValue = new QLabel(layoutWidget);
        scaleValue->setObjectName(QStringLiteral("scaleValue"));

        scalehorizontalLayout->addWidget(scaleValue);


        srcBottomhorizontalLayout->addLayout(scalehorizontalLayout);

        collectionhorizontalLayout = new QHBoxLayout();
        collectionhorizontalLayout->setSpacing(6);
        collectionhorizontalLayout->setObjectName(QStringLiteral("collectionhorizontalLayout"));
        collectionLabel = new QLabel(layoutWidget);
        collectionLabel->setObjectName(QStringLiteral("collectionLabel"));
        collectionLabel->setCursor(QCursor(Qt::ArrowCursor));

        collectionhorizontalLayout->addWidget(collectionLabel);

        collectionValue = new QLabel(layoutWidget);
        collectionValue->setObjectName(QStringLiteral("collectionValue"));

        collectionhorizontalLayout->addWidget(collectionValue);


        srcBottomhorizontalLayout->addLayout(collectionhorizontalLayout);

        fpshorizontalLayout = new QHBoxLayout();
        fpshorizontalLayout->setSpacing(6);
        fpshorizontalLayout->setObjectName(QStringLiteral("fpshorizontalLayout"));
        fpsLabel = new QLabel(layoutWidget);
        fpsLabel->setObjectName(QStringLiteral("fpsLabel"));

        fpshorizontalLayout->addWidget(fpsLabel);

        fpsValue = new QLabel(layoutWidget);
        fpsValue->setObjectName(QStringLiteral("fpsValue"));

        fpshorizontalLayout->addWidget(fpsValue);


        srcBottomhorizontalLayout->addLayout(fpshorizontalLayout);


        srcVerticalLayout->addLayout(srcBottomhorizontalLayout);

        srcVerticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1087, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionPreview);
        mainToolBar->addAction(actionCollectSingle);
        mainToolBar->addAction(actionCollectMulti);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSetting);
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSpaceAlgo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionPreview->setText(QApplication::translate("MainWindow", "\351\242\204\350\247\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPreview->setToolTip(QApplication::translate("MainWindow", "\351\242\204\350\247\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCollectSingle->setText(QApplication::translate("MainWindow", "\345\215\225\345\274\240\351\207\207\351\233\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCollectSingle->setToolTip(QApplication::translate("MainWindow", "\345\215\225\345\274\240\351\207\207\351\233\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCollectMulti->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCollectMulti->setToolTip(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetting->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        actionSpaceAlgo->setText(QApplication::translate("MainWindow", "\347\251\272\351\227\264\347\256\227\346\263\225", Q_NULLPTR));
        actionCloseAlgo->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\256\227\346\263\225", Q_NULLPTR));
        destDisplay->setText(QString());
        srcHeader->setText(QApplication::translate("MainWindow", "\351\242\204\350\247\210\345\214\272\345\237\237", Q_NULLPTR));
        srcDisplay->setText(QString());
        sizeLabel->setText(QApplication::translate("MainWindow", "\345\260\272\345\257\270", Q_NULLPTR));
        sizeValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        scaleLabel->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
        scaleValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        collectionLabel->setText(QApplication::translate("MainWindow", "\351\207\207\351\233\206\346\225\260\351\207\217", Q_NULLPTR));
        collectionValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        fpsLabel->setText(QApplication::translate("MainWindow", "\345\270\247\351\242\221", Q_NULLPTR));
        fpsValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreview;
    QAction *actionCollectSingle;
    QAction *actionCollectMulti;
    QAction *actionSetting;
    QAction *actionAbout;
    QAction *actionRefresh;
    QAction *actionSpaceAlgo;
    QAction *actionCloseAlgo;
    QWidget *centralWidget;
    QLabel *destDisplay;
    QFrame *srcFrame;
    QWidget *layoutWidget;
    QVBoxLayout *srcVerticalLayout;
    QLabel *srcHeader;
    QLabel *srcDisplay;
    QHBoxLayout *srcBottomhorizontalLayout;
    QHBoxLayout *sizehorizontalLayout;
    QLabel *sizeLabel;
    QLabel *sizeValue;
    QHBoxLayout *scalehorizontalLayout;
    QLabel *scaleLabel;
    QLabel *scaleValue;
    QHBoxLayout *collectionhorizontalLayout;
    QLabel *collectionLabel;
    QLabel *collectionValue;
    QHBoxLayout *fpshorizontalLayout;
    QLabel *fpsLabel;
    QLabel *fpsValue;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1087, 629);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionPreview = new QAction(MainWindow);
        actionPreview->setObjectName(QStringLiteral("actionPreview"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/play_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreview->setIcon(icon);
        actionCollectSingle = new QAction(MainWindow);
        actionCollectSingle->setObjectName(QStringLiteral("actionCollectSingle"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/OneShot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollectSingle->setIcon(icon1);
        actionCollectMulti = new QAction(MainWindow);
        actionCollectMulti->setObjectName(QStringLiteral("actionCollectMulti"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/ContinuousShot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCollectMulti->setIcon(icon2);
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/settings_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/get_info_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/refresh_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefresh->setIcon(icon5);
        actionSpaceAlgo = new QAction(MainWindow);
        actionSpaceAlgo->setObjectName(QStringLiteral("actionSpaceAlgo"));
        actionCloseAlgo = new QAction(MainWindow);
        actionCloseAlgo->setObjectName(QStringLiteral("actionCloseAlgo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(684, 550));
        centralWidget->setMaximumSize(QSize(1120, 550));
        destDisplay = new QLabel(centralWidget);
        destDisplay->setObjectName(QStringLiteral("destDisplay"));
        destDisplay->setGeometry(QRect(680, 10, 381, 331));
        srcFrame = new QFrame(centralWidget);
        srcFrame->setObjectName(QStringLiteral("srcFrame"));
        srcFrame->setGeometry(QRect(10, 10, 661, 531));
        srcFrame->setFrameShape(QFrame::StyledPanel);
        srcFrame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(srcFrame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 661, 531));
        srcVerticalLayout = new QVBoxLayout(layoutWidget);
        srcVerticalLayout->setSpacing(6);
        srcVerticalLayout->setContentsMargins(11, 11, 11, 11);
        srcVerticalLayout->setObjectName(QStringLiteral("srcVerticalLayout"));
        srcVerticalLayout->setContentsMargins(0, 0, 0, 0);
        srcHeader = new QLabel(layoutWidget);
        srcHeader->setObjectName(QStringLiteral("srcHeader"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(srcHeader->sizePolicy().hasHeightForWidth());
        srcHeader->setSizePolicy(sizePolicy1);
        srcHeader->setStyleSheet(QStringLiteral("width: 100%;"));
        srcHeader->setAlignment(Qt::AlignCenter);

        srcVerticalLayout->addWidget(srcHeader);

        srcDisplay = new QLabel(layoutWidget);
        srcDisplay->setObjectName(QStringLiteral("srcDisplay"));
        sizePolicy1.setHeightForWidth(srcDisplay->sizePolicy().hasHeightForWidth());
        srcDisplay->setSizePolicy(sizePolicy1);
        srcDisplay->setMinimumSize(QSize(0, 0));
        srcDisplay->setAutoFillBackground(false);
        srcDisplay->setStyleSheet(QStringLiteral(""));

        srcVerticalLayout->addWidget(srcDisplay);

        srcBottomhorizontalLayout = new QHBoxLayout();
        srcBottomhorizontalLayout->setSpacing(0);
        srcBottomhorizontalLayout->setObjectName(QStringLiteral("srcBottomhorizontalLayout"));
        sizehorizontalLayout = new QHBoxLayout();
        sizehorizontalLayout->setSpacing(6);
        sizehorizontalLayout->setObjectName(QStringLiteral("sizehorizontalLayout"));
        sizeLabel = new QLabel(layoutWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));

        sizehorizontalLayout->addWidget(sizeLabel);

        sizeValue = new QLabel(layoutWidget);
        sizeValue->setObjectName(QStringLiteral("sizeValue"));

        sizehorizontalLayout->addWidget(sizeValue);


        srcBottomhorizontalLayout->addLayout(sizehorizontalLayout);

        scalehorizontalLayout = new QHBoxLayout();
        scalehorizontalLayout->setSpacing(6);
        scalehorizontalLayout->setObjectName(QStringLiteral("scalehorizontalLayout"));
        scaleLabel = new QLabel(layoutWidget);
        scaleLabel->setObjectName(QStringLiteral("scaleLabel"));

        scalehorizontalLayout->addWidget(scaleLabel);

        scaleValue = new QLabel(layoutWidget);
        scaleValue->setObjectName(QStringLiteral("scaleValue"));

        scalehorizontalLayout->addWidget(scaleValue);


        srcBottomhorizontalLayout->addLayout(scalehorizontalLayout);

        collectionhorizontalLayout = new QHBoxLayout();
        collectionhorizontalLayout->setSpacing(6);
        collectionhorizontalLayout->setObjectName(QStringLiteral("collectionhorizontalLayout"));
        collectionLabel = new QLabel(layoutWidget);
        collectionLabel->setObjectName(QStringLiteral("collectionLabel"));
        collectionLabel->setCursor(QCursor(Qt::ArrowCursor));

        collectionhorizontalLayout->addWidget(collectionLabel);

        collectionValue = new QLabel(layoutWidget);
        collectionValue->setObjectName(QStringLiteral("collectionValue"));

        collectionhorizontalLayout->addWidget(collectionValue);


        srcBottomhorizontalLayout->addLayout(collectionhorizontalLayout);

        fpshorizontalLayout = new QHBoxLayout();
        fpshorizontalLayout->setSpacing(6);
        fpshorizontalLayout->setObjectName(QStringLiteral("fpshorizontalLayout"));
        fpsLabel = new QLabel(layoutWidget);
        fpsLabel->setObjectName(QStringLiteral("fpsLabel"));

        fpshorizontalLayout->addWidget(fpsLabel);

        fpsValue = new QLabel(layoutWidget);
        fpsValue->setObjectName(QStringLiteral("fpsValue"));

        fpshorizontalLayout->addWidget(fpsValue);


        srcBottomhorizontalLayout->addLayout(fpshorizontalLayout);


        srcVerticalLayout->addLayout(srcBottomhorizontalLayout);

        srcVerticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1087, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionPreview);
        mainToolBar->addAction(actionCollectSingle);
        mainToolBar->addAction(actionCollectMulti);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSetting);
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSpaceAlgo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionPreview->setText(QApplication::translate("MainWindow", "\351\242\204\350\247\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPreview->setToolTip(QApplication::translate("MainWindow", "\351\242\204\350\247\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCollectSingle->setText(QApplication::translate("MainWindow", "\345\215\225\345\274\240\351\207\207\351\233\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCollectSingle->setToolTip(QApplication::translate("MainWindow", "\345\215\225\345\274\240\351\207\207\351\233\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCollectMulti->setText(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCollectMulti->setToolTip(QApplication::translate("MainWindow", "\350\277\236\347\273\255\351\207\207\351\233\206", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSetting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetting->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        actionSpaceAlgo->setText(QApplication::translate("MainWindow", "\347\251\272\351\227\264\347\256\227\346\263\225", Q_NULLPTR));
        actionCloseAlgo->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\256\227\346\263\225", Q_NULLPTR));
        destDisplay->setText(QString());
        srcHeader->setText(QApplication::translate("MainWindow", "\351\242\204\350\247\210\345\214\272\345\237\237", Q_NULLPTR));
        srcDisplay->setText(QString());
        sizeLabel->setText(QApplication::translate("MainWindow", "\345\260\272\345\257\270", Q_NULLPTR));
        sizeValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        scaleLabel->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
        scaleValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        collectionLabel->setText(QApplication::translate("MainWindow", "\351\207\207\351\233\206\346\225\260\351\207\217", Q_NULLPTR));
        collectionValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        fpsLabel->setText(QApplication::translate("MainWindow", "\345\270\247\351\242\221", Q_NULLPTR));
        fpsValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
