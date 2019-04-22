/********************************************************************************
** Form generated from reading UI file 'brightness.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRIGHTNESS_H
#define UI_BRIGHTNESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Brightness
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QWidget *Brightness)
    {
        if (Brightness->objectName().isEmpty())
            Brightness->setObjectName(QStringLiteral("Brightness"));
        Brightness->resize(422, 123);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icon/brightness.png"), QSize(), QIcon::Normal, QIcon::Off);
        Brightness->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Brightness);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Brightness);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox = new QSpinBox(Brightness);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setStyleStrategy(QFont::PreferAntialias);
        spinBox->setFont(font1);
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalSlider = new QSlider(Brightness);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        OK = new QPushButton(Brightness);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setFont(font);

        verticalLayout_2->addWidget(OK);

        Cancel = new QPushButton(Brightness);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font);

        verticalLayout_2->addWidget(Cancel);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Brightness);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Brightness);
    } // setupUi

    void retranslateUi(QWidget *Brightness)
    {
        Brightness->setWindowTitle(QApplication::translate("Brightness", "Form", nullptr));
        label->setText(QApplication::translate("Brightness", "Brightness:", nullptr));
        OK->setText(QApplication::translate("Brightness", "OK", nullptr));
        Cancel->setText(QApplication::translate("Brightness", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Brightness: public Ui_Brightness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRIGHTNESS_H
