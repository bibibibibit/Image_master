/********************************************************************************
** Form generated from reading UI file 'contrast.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRAST_H
#define UI_CONTRAST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contrast
{
public:
    QSlider *horizontalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *OK;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Cancel;

    void setupUi(QWidget *Contrast)
    {
        if (Contrast->objectName().isEmpty())
            Contrast->setObjectName(QStringLiteral("Contrast"));
        Contrast->resize(426, 139);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icon/contrast.png"), QSize(), QIcon::Normal, QIcon::Off);
        Contrast->setWindowIcon(icon);
        horizontalSlider = new QSlider(Contrast);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 90, 171, 22));
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(Contrast);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 181, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);

        layoutWidget1 = new QWidget(Contrast);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 10, 95, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        OK = new QPushButton(layoutWidget1);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setFont(font);

        verticalLayout_2->addWidget(OK);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        Cancel = new QPushButton(layoutWidget1);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font);

        verticalLayout_2->addWidget(Cancel);


        retranslateUi(Contrast);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Contrast);
    } // setupUi

    void retranslateUi(QWidget *Contrast)
    {
        Contrast->setWindowTitle(QApplication::translate("Contrast", "Form", nullptr));
        label->setText(QApplication::translate("Contrast", "Contrast", nullptr));
        OK->setText(QApplication::translate("Contrast", "OK", nullptr));
        Cancel->setText(QApplication::translate("Contrast", "Cencel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contrast: public Ui_Contrast {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRAST_H
