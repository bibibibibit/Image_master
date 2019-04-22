#include "contrast.h"
#include "ui_contrast.h"
#include "opetation.h"
#include "loadpng.h"
#include "mainwindow.h"
#include <cmath>
#include <QMessageBox>

Contrast::Contrast(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Contrast)
{
    ui->setupUi(this);
}

Contrast::~Contrast()
{
    delete ui;
}

void Contrast::on_OK_clicked()
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
            if (red[i][j]>127){
                float new_red=red[i][j]*(1+value/100.0);
                if (new_red>255){
                    red[i][j]=255;
                }else if (new_red<128){
                    red[i][j]=128;
                }else{
                    red[i][j]=new_red;
                }
            }else{
                float new_red=red[i][j]*(1-value/100.0);
                if (new_red>127){
                    red[i][j]=127;
                }else{
                    red[i][j]=new_red;
                }
        }
            if (gre[i][j]>127){
                float new_gre=gre[i][j]*(1+value/100.0);
                if (new_gre>255){
                    gre[i][j]=255;
                }else if (new_gre<128){
                    gre[i][j]=128;
                }else{
                    gre[i][j]=new_gre;
                }
            }else{
                float new_gre=gre[i][j]*(1-value/100.0);
                if (new_gre>127){
                    gre[i][j]=127;
                }else{
                    gre[i][j]=new_gre;
                }
            }
            if (blu[i][j]>127){
                float new_blu=blu[i][j]*(1+value/100.0);
                if (new_blu>255){
                    blu[i][j]=255;
                }else if (new_blu<128){
                    blu[i][j]=128;
                }else{
                    blu[i][j]=new_blu;
                }
            }else{
                float new_blu=blu[i][j]*(1-value/100.0);
                if (new_blu>127){
                    blu[i][j]=127;
                }else{
                    blu[i][j]=new_blu;
                }
            }
        }
    }
    unsigned char *cache;
    cache=png_cache(image_Matrix);
    QImage *image = new QImage(cache,col,row,QImage::Format_RGBA8888);
    imageview->setPixmap(QPixmap::fromImage(*image));
    QMessageBox::information(this,"Complete!","The operation is completed!");
}

void Contrast::on_Cancel_clicked(){
    ui->spinBox->setValue(0);
}
