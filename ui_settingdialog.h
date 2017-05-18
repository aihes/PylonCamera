/********************************************************************************
** Form generated from reading UI file 'settingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDIALOG_H
#define UI_SETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QLabel *label;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *filePath;
    QLabel *label_3;
    QLineEdit *filePrefix;
    QLabel *label_11;
    QPushButton *selectDir;
    QComboBox *imageFormat;
    QComboBox *resolution;
    QLabel *label_6;
    QLineEdit *fps;
    QLineEdit *exposureTime;
    QLabel *label_15;
    QLabel *label_2;
    QLabel *label_18;
    QLabel *label_4;
    QLabel *label_13;
    QLineEdit *image2save;
    QLabel *label_5;
    QLabel *label_14;
    QLineEdit *customAttr;
    QLineEdit *customValue;
    QComboBox *customType;
    QFrame *frame_2;
    QLabel *label_7;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *cameraWidth;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *cameraHeight;
    QLabel *label_8;
    QLabel *label_16;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->resize(451, 525);
        buttonBox = new QDialogButtonBox(SettingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(SettingDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 20, 411, 321));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 351, 20));
        label->setAlignment(Qt::AlignCenter);
        formLayoutWidget = new QWidget(frame);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 381, 261));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 7, 4, 1, 1);

        filePath = new QLineEdit(formLayoutWidget);
        filePath->setObjectName(QStringLiteral("filePath"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filePath->sizePolicy().hasHeightForWidth());
        filePath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(filePath, 1, 4, 1, 1);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        filePrefix = new QLineEdit(formLayoutWidget);
        filePrefix->setObjectName(QStringLiteral("filePrefix"));
        sizePolicy.setHeightForWidth(filePrefix->sizePolicy().hasHeightForWidth());
        filePrefix->setSizePolicy(sizePolicy);

        gridLayout->addWidget(filePrefix, 0, 4, 1, 1);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 7, 1, 1, 1);

        selectDir = new QPushButton(formLayoutWidget);
        selectDir->setObjectName(QStringLiteral("selectDir"));

        gridLayout->addWidget(selectDir, 1, 5, 1, 1);

        imageFormat = new QComboBox(formLayoutWidget);
        imageFormat->setObjectName(QStringLiteral("imageFormat"));

        gridLayout->addWidget(imageFormat, 0, 5, 1, 1);

        resolution = new QComboBox(formLayoutWidget);
        resolution->setObjectName(QStringLiteral("resolution"));

        gridLayout->addWidget(resolution, 2, 4, 1, 1);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        fps = new QLineEdit(formLayoutWidget);
        fps->setObjectName(QStringLiteral("fps"));
        sizePolicy.setHeightForWidth(fps->sizePolicy().hasHeightForWidth());
        fps->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fps, 4, 4, 1, 1);

        exposureTime = new QLineEdit(formLayoutWidget);
        exposureTime->setObjectName(QStringLiteral("exposureTime"));
        sizePolicy.setHeightForWidth(exposureTime->sizePolicy().hasHeightForWidth());
        exposureTime->setSizePolicy(sizePolicy);

        gridLayout->addWidget(exposureTime, 5, 4, 1, 1);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 4, 5, 1, 1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_18 = new QLabel(formLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 2, 0, 1, 1);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 3, 5, 1, 1);

        image2save = new QLineEdit(formLayoutWidget);
        image2save->setObjectName(QStringLiteral("image2save"));
        sizePolicy.setHeightForWidth(image2save->sizePolicy().hasHeightForWidth());
        image2save->setSizePolicy(sizePolicy);

        gridLayout->addWidget(image2save, 3, 4, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 5, 5, 1, 1);

        customAttr = new QLineEdit(formLayoutWidget);
        customAttr->setObjectName(QStringLiteral("customAttr"));

        gridLayout->addWidget(customAttr, 6, 0, 1, 1);

        customValue = new QLineEdit(formLayoutWidget);
        customValue->setObjectName(QStringLiteral("customValue"));

        gridLayout->addWidget(customValue, 6, 4, 1, 1);

        customType = new QComboBox(formLayoutWidget);
        customType->setObjectName(QStringLiteral("customType"));

        gridLayout->addWidget(customType, 6, 5, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        frame_2 = new QFrame(SettingDialog);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(20, 370, 381, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(160, 0, 60, 16));
        widget = new QWidget(frame_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 20, 251, 61));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cameraWidth = new QLineEdit(widget);
        cameraWidth->setObjectName(QStringLiteral("cameraWidth"));
        sizePolicy.setHeightForWidth(cameraWidth->sizePolicy().hasHeightForWidth());
        cameraWidth->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cameraWidth, 0, 1, 2, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 2, 1);

        cameraHeight = new QLineEdit(widget);
        cameraHeight->setObjectName(QStringLiteral("cameraHeight"));
        sizePolicy.setHeightForWidth(cameraHeight->sizePolicy().hasHeightForWidth());
        cameraHeight->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cameraHeight, 2, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 2, 2, 1, 1);


        retranslateUi(SettingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SettingDialog", "\347\233\270\346\234\272\350\256\276\347\275\256", Q_NULLPTR));
        label_12->setText(QString());
        filePath->setText(QApplication::translate("SettingDialog", "/Users/aihe/images", Q_NULLPTR));
        label_3->setText(QApplication::translate("SettingDialog", "\344\277\235\345\255\230\350\267\257\345\276\204", Q_NULLPTR));
        filePrefix->setText(QApplication::translate("SettingDialog", "capture", Q_NULLPTR));
        label_11->setText(QString());
        selectDir->setText(QApplication::translate("SettingDialog", "...", Q_NULLPTR));
        imageFormat->clear();
        imageFormat->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "png", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "tiff", Q_NULLPTR)
        );
        resolution->clear();
        resolution->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "658x492", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "600x400", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "300x200", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("SettingDialog", "\346\233\235\345\205\211\346\227\266\351\227\264", Q_NULLPTR));
        label_15->setText(QApplication::translate("SettingDialog", "fps", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingDialog", "\346\226\207\344\273\266\345\220\215\345\211\215\347\274\200", Q_NULLPTR));
        label_18->setText(QApplication::translate("SettingDialog", "\345\210\206\350\276\250\347\216\207", Q_NULLPTR));
        label_4->setText(QApplication::translate("SettingDialog", "\351\207\207\351\233\206\346\225\260\351\207\217", Q_NULLPTR));
        label_13->setText(QApplication::translate("SettingDialog", "\345\274\240", Q_NULLPTR));
        image2save->setText(QApplication::translate("SettingDialog", "200", Q_NULLPTR));
        label_5->setText(QApplication::translate("SettingDialog", "\345\270\247\351\242\221", Q_NULLPTR));
        label_14->setText(QApplication::translate("SettingDialog", "us", Q_NULLPTR));
        customAttr->setPlaceholderText(QApplication::translate("SettingDialog", "\350\207\252\345\256\232\344\271\211\345\261\236\346\200\247", Q_NULLPTR));
        customValue->setPlaceholderText(QApplication::translate("SettingDialog", "\350\207\252\345\256\232\344\271\211\345\261\236\346\200\247\345\200\274", Q_NULLPTR));
        customType->clear();
        customType->insertItems(0, QStringList()
         << QApplication::translate("SettingDialog", "int", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "float", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "bool", Q_NULLPTR)
         << QApplication::translate("SettingDialog", "string", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("SettingDialog", "\347\205\247\347\211\207\345\244\247\345\260\217", Q_NULLPTR));
        label_10->setText(QApplication::translate("SettingDialog", "\351\253\230\345\272\246", Q_NULLPTR));
        label_9->setText(QApplication::translate("SettingDialog", "\345\256\275\345\272\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("SettingDialog", "px", Q_NULLPTR));
        label_16->setText(QApplication::translate("SettingDialog", "px", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDIALOG_H
