/********************************************************************************
** Form generated from reading UI file 'myfram.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFRAM_H
#define UI_MYFRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFram
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_2;

    void setupUi(QWidget *MyFram)
    {
        if (MyFram->objectName().isEmpty())
            MyFram->setObjectName(QStringLiteral("MyFram"));
        MyFram->resize(400, 300);
        gridLayout = new QGridLayout(MyFram);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(MyFram);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_3 = new QLabel(MyFram);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(MyFram);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_5 = new QLabel(MyFram);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label_6 = new QLabel(MyFram);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_7 = new QLabel(MyFram);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 4, 1, 1);

        label_2 = new QLabel(MyFram);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 5);

        gridLayout->setRowStretch(1, 1);

        retranslateUi(MyFram);

        QMetaObject::connectSlotsByName(MyFram);
    } // setupUi

    void retranslateUi(QWidget *MyFram)
    {
        MyFram->setWindowTitle(QApplication::translate("MyFram", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyFram", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyFram: public Ui_MyFram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFRAM_H
