#include "alpha.h"
#include "ui_alpha.h"
#include "opetation.h"
#include "loadpng.h"
#include "mainwindow.h"
#include <QMessageBox>

Alpha::Alpha(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alpha)
{
    ui->setupUi(this);
}

Alpha::~Alpha()
{
    delete ui;
}

void Alpha::on_OK_clicked()
{
    int value=ui->spinBox->value();
    float **alp;
    alp=image_Matrix[3].getaddress();
    unsigned int col,row;
    col=image_Matrix[3].getcolnum();
    row=image_Matrix[3].getrownum();
    for (unsigned int i=0;i<row;i++){
        for (unsigned int j=0;j<col;j++){
            alp[i][j]=alp[i][j]*(1-value/100.0);
        }
    }
    unsigned char *cache;
    cache=png_cache(image_Matrix);
    QImage *image = new QImage(cache,col,row,QImage::Format_RGBA8888);
    imageview->setPixmap(QPixmap::fromImage(*image));
    QMessageBox::information(this,"Complete!","The operation is completed!");
}

void Alpha::on_Cancel_clicked()
{
    ui->spinBox->setValue(0);
}
