#include "brightness.h"
#include "ui_brightness.h"
#include "opetation.h"
#include "loadpng.h"
#include "mainwindow.h"
#include <QMessageBox>

Brightness::Brightness(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Brightness)
{
    ui->setupUi(this);
}

Brightness::~Brightness()
{
    delete ui;
}

void Brightness::on_OK_clicked()
{
    int value=ui->spinBox->value();
    float **red,**gre,**blu;
    red=image_Matrix[0].getaddress();
    gre=image_Matrix[1].getaddress();
    blu=image_Matrix[2].getaddress();
    unsigned int col,row;
    col=image_Matrix[0].getcolnum();
    row=image_Matrix[0].getrownum();
    for (unsigned int i=0;i<row;i++){
        for (unsigned int j=0;j<col;j++){
            if (red[i][j]+value>255){
                red[i][j]=255;
            }else if (red[i][j]+value<0){
                red[i][j]=0;
            }else{
                red[i][j]+=value;
            }
            if (gre[i][j]+value>255){
                gre[i][j]=255;
            }else if (gre[i][j]+value<0){
                gre[i][j]=0;
            }else{
                gre[i][j]+=value;
            }
            if (blu[i][j]+value>255){
                blu[i][j]=255;
            }else if (blu[i][j]+value<0){
                blu[i][j]=0;
            }else{
                blu[i][j]+=value;
            }
        }
    }
    unsigned char *cache;
    cache=png_cache(image_Matrix);
    QImage *image = new QImage(cache,col,row,QImage::Format_RGBA8888);
    imageview->setPixmap(QPixmap::fromImage(*image));
    QMessageBox::information(this,"Complete!","The operation is completed!");
}

void Brightness::on_Cancel_clicked()
{
    ui->spinBox->setValue(0);
}
