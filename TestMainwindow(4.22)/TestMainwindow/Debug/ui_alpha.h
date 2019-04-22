/********************************************************************************
** Form generated from reading UI file 'alpha.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALPHA_H
#define UI_ALPHA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alpha
{
public:
    QSlider *horizontalSlider;
    QPushButton *OK;
    QPushButton *Cancel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox;

    void setupUi(QWidget *Alpha)
    {
        if (Alpha->objectName().isEmpty())
            Alpha->setObjectName(QStringLiteral("Alpha"));
        Alpha->resize(400, 144);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icon/alpha.png"), QSize(), QIcon::Normal, QIcon::Off);
        Alpha->setWindowIcon(icon);
        horizontalSlider = new QSlider(Alpha);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 90, 181, 22));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        OK = new QPushButton(Alpha);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(270, 20, 93, 28));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        OK->setFont(font);
        Cancel = new QPushButton(Alpha);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(270, 80, 93, 28));
        Cancel->setFont(font);
        widget = new QWidget(Alpha);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 181, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setFont(font);
        spinBox->setMinimum(0);
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);


        retranslateUi(Alpha);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Alpha);
    } // setupUi

    void retranslateUi(QWidget *Alpha)
    {
        Alpha->setWindowTitle(QApplication::translate("Alpha", "Alpha", nullptr));
        OK->setText(QApplication::translate("Alpha", "OK", nullptr));
        Cancel->setText(QApplication::translate("Alpha", "Cancel", nullptr));
        label->setText(QApplication::translate("Alpha", "Alpha:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Alpha: public Ui_Alpha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALPHA_H
