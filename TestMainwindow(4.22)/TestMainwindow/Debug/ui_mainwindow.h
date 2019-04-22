/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionTranslation;
    QAction *actionRight_90;
    QAction *action180;
    QAction *actionLeft_90;
    QAction *actionUser_defined_Degree;
    QAction *actionHorozontal;
    QAction *actionVertical;
    QAction *actionR_Type;
    QAction *actionG_Type;
    QAction *actionB_Type;
    QAction *actionLow_Sharpen;
    QAction *actionMedium_Sharpen;
    QAction *actionHigh_Sharpen;
    QAction *actionCustom_Degree;
    QAction *actionBrightness;
    QAction *actionContrast;
    QAction *actionBlack_White;
    QAction *actionGrey_Level;
    QAction *actionLow_Reduce;
    QAction *actionMid_Reduce;
    QAction *actionHigh_Reduce;
    QAction *actionCustom_Degree_2;
    QAction *actionVertical_2;
    QAction *actionVertical_3;
    QAction *actionPerspective_Transformation;
    QAction *actionAnalog_Double_Exposure;
    QAction *actionIntelligent_Image_Segmentation;
    QAction *actionSave_as;
    QAction *actionAlpha;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuGeometry;
    QMenu *menuRotation;
    QMenu *menuMirror;
    QMenu *menuHistogram;
    QMenu *menuSharpen;
    QMenu *menuBasic;
    QMenu *menuNoise_Reduction;
    QMenu *menuEdge_Enhancement;
    QMenu *menu_Perspective_Transformation;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(972, 708);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Icon/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionTranslation = new QAction(MainWindow);
        actionTranslation->setObjectName(QStringLiteral("actionTranslation"));
        actionRight_90 = new QAction(MainWindow);
        actionRight_90->setObjectName(QStringLiteral("actionRight_90"));
        action180 = new QAction(MainWindow);
        action180->setObjectName(QStringLiteral("action180"));
        actionLeft_90 = new QAction(MainWindow);
        actionLeft_90->setObjectName(QStringLiteral("actionLeft_90"));
        actionUser_defined_Degree = new QAction(MainWindow);
        actionUser_defined_Degree->setObjectName(QStringLiteral("actionUser_defined_Degree"));
        actionHorozontal = new QAction(MainWindow);
        actionHorozontal->setObjectName(QStringLiteral("actionHorozontal"));
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QStringLiteral("actionVertical"));
        actionR_Type = new QAction(MainWindow);
        actionR_Type->setObjectName(QStringLiteral("actionR_Type"));
        actionG_Type = new QAction(MainWindow);
        actionG_Type->setObjectName(QStringLiteral("actionG_Type"));
        actionB_Type = new QAction(MainWindow);
        actionB_Type->setObjectName(QStringLiteral("actionB_Type"));
        actionLow_Sharpen = new QAction(MainWindow);
        actionLow_Sharpen->setObjectName(QStringLiteral("actionLow_Sharpen"));
        actionMedium_Sharpen = new QAction(MainWindow);
        actionMedium_Sharpen->setObjectName(QStringLiteral("actionMedium_Sharpen"));
        actionHigh_Sharpen = new QAction(MainWindow);
        actionHigh_Sharpen->setObjectName(QStringLiteral("actionHigh_Sharpen"));
        actionCustom_Degree = new QAction(MainWindow);
        actionCustom_Degree->setObjectName(QStringLiteral("actionCustom_Degree"));
        actionBrightness = new QAction(MainWindow);
        actionBrightness->setObjectName(QStringLiteral("actionBrightness"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Icon/brightness.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBrightness->setIcon(icon3);
        actionContrast = new QAction(MainWindow);
        actionContrast->setObjectName(QStringLiteral("actionContrast"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Icon/contrast.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionContrast->setIcon(icon4);
        actionBlack_White = new QAction(MainWindow);
        actionBlack_White->setObjectName(QStringLiteral("actionBlack_White"));
        actionGrey_Level = new QAction(MainWindow);
        actionGrey_Level->setObjectName(QStringLiteral("actionGrey_Level"));
        actionLow_Reduce = new QAction(MainWindow);
        actionLow_Reduce->setObjectName(QStringLiteral("actionLow_Reduce"));
        actionMid_Reduce = new QAction(MainWindow);
        actionMid_Reduce->setObjectName(QStringLiteral("actionMid_Reduce"));
        actionHigh_Reduce = new QAction(MainWindow);
        actionHigh_Reduce->setObjectName(QStringLiteral("actionHigh_Reduce"));
        actionCustom_Degree_2 = new QAction(MainWindow);
        actionCustom_Degree_2->setObjectName(QStringLiteral("actionCustom_Degree_2"));
        actionVertical_2 = new QAction(MainWindow);
        actionVertical_2->setObjectName(QStringLiteral("actionVertical_2"));
        actionVertical_3 = new QAction(MainWindow);
        actionVertical_3->setObjectName(QStringLiteral("actionVertical_3"));
        actionPerspective_Transformation = new QAction(MainWindow);
        actionPerspective_Transformation->setObjectName(QStringLiteral("actionPerspective_Transformation"));
        actionAnalog_Double_Exposure = new QAction(MainWindow);
        actionAnalog_Double_Exposure->setObjectName(QStringLiteral("actionAnalog_Double_Exposure"));
        actionIntelligent_Image_Segmentation = new QAction(MainWindow);
        actionIntelligent_Image_Segmentation->setObjectName(QStringLiteral("actionIntelligent_Image_Segmentation"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Icon/Save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon5);
        actionAlpha = new QAction(MainWindow);
        actionAlpha->setObjectName(QStringLiteral("actionAlpha"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/Icon/alpha.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlpha->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(500, 600));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 948, 598));
        scrollAreaWidgetContents->setMinimumSize(QSize(500, 500));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 972, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuGeometry = new QMenu(menuBar);
        menuGeometry->setObjectName(QStringLiteral("menuGeometry"));
        menuRotation = new QMenu(menuGeometry);
        menuRotation->setObjectName(QStringLiteral("menuRotation"));
        menuMirror = new QMenu(menuGeometry);
        menuMirror->setObjectName(QStringLiteral("menuMirror"));
        menuHistogram = new QMenu(menuBar);
        menuHistogram->setObjectName(QStringLiteral("menuHistogram"));
        menuSharpen = new QMenu(menuBar);
        menuSharpen->setObjectName(QStringLiteral("menuSharpen"));
        menuBasic = new QMenu(menuBar);
        menuBasic->setObjectName(QStringLiteral("menuBasic"));
        menuNoise_Reduction = new QMenu(menuBar);
        menuNoise_Reduction->setObjectName(QStringLiteral("menuNoise_Reduction"));
        menuEdge_Enhancement = new QMenu(menuBar);
        menuEdge_Enhancement->setObjectName(QStringLiteral("menuEdge_Enhancement"));
        menu_Perspective_Transformation = new QMenu(menuBar);
        menu_Perspective_Transformation->setObjectName(QStringLiteral("menu_Perspective_Transformation"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuBasic->menuAction());
        menuBar->addAction(menuGeometry->menuAction());
        menuBar->addAction(menuHistogram->menuAction());
        menuBar->addAction(menuSharpen->menuAction());
        menuBar->addAction(menuNoise_Reduction->menuAction());
        menuBar->addAction(menuEdge_Enhancement->menuAction());
        menuBar->addAction(menu_Perspective_Transformation->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuGeometry->addAction(menuRotation->menuAction());
        menuGeometry->addAction(actionTranslation);
        menuGeometry->addAction(menuMirror->menuAction());
        menuRotation->addAction(actionRight_90);
        menuRotation->addAction(action180);
        menuRotation->addAction(actionLeft_90);
        menuRotation->addAction(actionUser_defined_Degree);
        menuMirror->addAction(actionHorozontal);
        menuMirror->addAction(actionVertical);
        menuHistogram->addAction(actionR_Type);
        menuHistogram->addAction(actionG_Type);
        menuHistogram->addAction(actionB_Type);
        menuSharpen->addAction(actionLow_Sharpen);
        menuSharpen->addAction(actionMedium_Sharpen);
        menuSharpen->addAction(actionHigh_Sharpen);
        menuSharpen->addAction(actionCustom_Degree);
        menuBasic->addAction(actionBrightness);
        menuBasic->addAction(actionContrast);
        menuBasic->addAction(actionAlpha);
        menuBasic->addAction(actionBlack_White);
        menuBasic->addAction(actionGrey_Level);
        menuNoise_Reduction->addAction(actionLow_Reduce);
        menuNoise_Reduction->addAction(actionMid_Reduce);
        menuNoise_Reduction->addAction(actionHigh_Reduce);
        menuNoise_Reduction->addAction(actionCustom_Degree_2);
        menuEdge_Enhancement->addAction(actionVertical_2);
        menuEdge_Enhancement->addAction(actionVertical_3);
        menu_Perspective_Transformation->addAction(actionPerspective_Transformation);
        menu_Perspective_Transformation->addAction(actionAnalog_Double_Exposure);
        menu_Perspective_Transformation->addAction(actionIntelligent_Image_Segmentation);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_as);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionTranslation->setText(QApplication::translate("MainWindow", "Translation", nullptr));
        actionRight_90->setText(QApplication::translate("MainWindow", "Right 90\302\260", nullptr));
        action180->setText(QApplication::translate("MainWindow", "180\302\260", nullptr));
        actionLeft_90->setText(QApplication::translate("MainWindow", "Left 90\302\260", nullptr));
        actionUser_defined_Degree->setText(QApplication::translate("MainWindow", "Any Degree...", nullptr));
        actionHorozontal->setText(QApplication::translate("MainWindow", "Horizontal", nullptr));
        actionVertical->setText(QApplication::translate("MainWindow", "Vertical", nullptr));
        actionR_Type->setText(QApplication::translate("MainWindow", "R-Type", nullptr));
        actionG_Type->setText(QApplication::translate("MainWindow", "G-Type", nullptr));
        actionB_Type->setText(QApplication::translate("MainWindow", "B-Type", nullptr));
        actionLow_Sharpen->setText(QApplication::translate("MainWindow", "Low-Sharpen", nullptr));
        actionMedium_Sharpen->setText(QApplication::translate("MainWindow", "Mid_Sharpen", nullptr));
        actionHigh_Sharpen->setText(QApplication::translate("MainWindow", "High-Sharpen", nullptr));
        actionCustom_Degree->setText(QApplication::translate("MainWindow", "Custom Degree...", nullptr));
        actionBrightness->setText(QApplication::translate("MainWindow", "Brightness", nullptr));
        actionContrast->setText(QApplication::translate("MainWindow", "Contrast", nullptr));
        actionBlack_White->setText(QApplication::translate("MainWindow", "Black-White", nullptr));
        actionGrey_Level->setText(QApplication::translate("MainWindow", "Grey-Level", nullptr));
        actionLow_Reduce->setText(QApplication::translate("MainWindow", "Low-Reduce", nullptr));
        actionMid_Reduce->setText(QApplication::translate("MainWindow", "Mid-Reduce", nullptr));
        actionHigh_Reduce->setText(QApplication::translate("MainWindow", "High-Reduce", nullptr));
        actionCustom_Degree_2->setText(QApplication::translate("MainWindow", "Custom-Degree", nullptr));
        actionVertical_2->setText(QApplication::translate("MainWindow", "Horizontal", nullptr));
        actionVertical_3->setText(QApplication::translate("MainWindow", "Vertical", nullptr));
        actionPerspective_Transformation->setText(QApplication::translate("MainWindow", "Perspective Transformation", nullptr));
        actionAnalog_Double_Exposure->setText(QApplication::translate("MainWindow", "Analog Double Exposure", nullptr));
        actionIntelligent_Image_Segmentation->setText(QApplication::translate("MainWindow", "Intelligent Image Segmentation", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
        actionAlpha->setText(QApplication::translate("MainWindow", "Alpha", nullptr));
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuGeometry->setTitle(QApplication::translate("MainWindow", "Geometry", nullptr));
        menuRotation->setTitle(QApplication::translate("MainWindow", "Rotation", nullptr));
        menuMirror->setTitle(QApplication::translate("MainWindow", "Mirror", nullptr));
        menuHistogram->setTitle(QApplication::translate("MainWindow", "Histogram", nullptr));
        menuSharpen->setTitle(QApplication::translate("MainWindow", "Sharpen", nullptr));
        menuBasic->setTitle(QApplication::translate("MainWindow", "Basic", nullptr));
        menuNoise_Reduction->setTitle(QApplication::translate("MainWindow", "Noise Reduction", nullptr));
        menuEdge_Enhancement->setTitle(QApplication::translate("MainWindow", "Edge Enhancement", nullptr));
        menu_Perspective_Transformation->setTitle(QApplication::translate("MainWindow", "Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
