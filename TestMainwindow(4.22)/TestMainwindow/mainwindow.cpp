#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "mymatrix.h"
#include "loadpng.h"
#include "lodepng.h"
#include "opetation.h"
#include <QByteArray>
#include "brightness.h"
#include "contrast.h"
#include "alpha.h"
#include <QFile>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    fileName = QFileDialog::getOpenFileName(this,"Choose Image","image",("Image File(*.png)")) ;
    QImage *image = new QImage;
    image->load(fileName);
    int width = image->width();
    int height = image->height();
    ui->scrollAreaWidgetContents->setGeometry(0,0,width,height);
    ui->scrollAreaWidgetContents->setMinimumWidth(width);
    ui->scrollAreaWidgetContents->setMinimumHeight(height);
    ui->label->setGeometry(0,0,width,height);
    ui->label->setPixmap(QPixmap::fromImage(*image));
    QByteArray ba = fileName.toLatin1();
    const char *filename;
    filename=ba.data();
    image_Matrix=png_read(filename);
}

void MainWindow::on_actionSave_triggered()
{
    QFile::remove(fileName);
    QByteArray ba = fileName.toLatin1();
    const char *filename;
    filename=ba.data();
    png_output(filename,image_Matrix);
}

void MainWindow::on_actionSave_as_triggered()
{
    savefileName=QFileDialog::getSaveFileName(this,"Save image as",fileName,("Image File(*.png)"));
    QByteArray ba = savefileName.toLatin1();
    const char *savefilename;
    savefilename=ba.data();
    png_output(savefilename,image_Matrix);
}

void MainWindow::on_actionBrightness_triggered()
{
    brightness=new Brightness();
    brightness->imageview=ui->label;
    brightness->show();
}

void MainWindow::on_actionContrast_triggered()
{
    contrast=new Contrast();
    contrast->imageview=ui->label;
    contrast->show();
}

void MainWindow::on_actionAlpha_triggered()
{
    alpha=new Alpha();
    alpha->imageview=ui->label;
    alpha->show();
}
