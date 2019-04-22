#include "mymatrix.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;


Matrix::Matrix(){
    col_num = 1;     // enter by row by row order
    row_num = 1;
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    for (unsigned int i=0;i<row_num;i++){
        for (unsigned int j=0;j<col_num+1;j++){
            if (j!=col_num){
                address[i][j]=0;
            }else{
            address[i][j]='\0';}
        }
    }
};

float **Matrix::getaddress(){
    return address;
}

unsigned int Matrix::getcolnum(){
    return col_num;
}
unsigned int Matrix::getrownum(){
    return row_num;
}


Matrix:: Matrix(vector<vector<int>> &vec){
    col_num=vec[0].size();
    row_num=vec.size();
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    for (unsigned int i=0;i<row_num;i++){
        for (unsigned int j=0;j<col_num+1;j++){
            if (j!=col_num){
                address[i][j]=(float)vec[i][j];

            }else{
            address[i][j]='\0';};
        }
    }

}

Matrix:: Matrix(vector<vector<float>> &vec){
    col_num=vec[0].size();
    row_num=vec.size();
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    for (unsigned int i=0;i<row_num;i++){
        for (unsigned int j=0;j<col_num+1;j++){
            if (j!=col_num){
                address[i][j]=vec[i][j];

            }else{
            address[i][j]='\0';};
        }
    }
}

Matrix::Matrix(vector<float> &vec, unsigned int rownum, unsigned int colnum){
    col_num=colnum;
    row_num=rownum;
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    for (unsigned int i=0;i<row_num*col_num;i++){
        address[i/col_num][i%col_num]=vec[i];
    }
}

Matrix::Matrix(unsigned int rownum, unsigned int colnum){
    col_num=colnum;
    row_num=rownum;
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    for (unsigned int i=0;i<row_num;i++){
        for (unsigned int j=0;j<col_num+1;j++){
            if (j!=col_num){
                address[i][j]=0;

            }else{
            address[i][j]='\0';};
        }
    }
}

Matrix::Matrix(string symbol, unsigned int n){
    col_num=n;
    row_num=n;
    address=(float**)malloc(sizeof(float*)*row_num);
    for (unsigned int i=0;i<row_num;i++){
        address[i]=(float*)malloc(sizeof(float)*(col_num+1));
    }
    // dimension = {row_num, col_num};

    if (symbol == "one"){
        for (unsigned int i = 0 ; i < row_num; i++){
            for (unsigned int j = 0 ; j< col_num; j++){
                if(i == j) {
                    address[i][j] = 1 ;
                //    cout<<"hhh"<<address[i][j]<<endl ;
                } if(i!= j){
                    address[i][j] = 0 ;
                } ;
            };
        };
    };

    if (symbol == "zero"){
        for (unsigned int i = 0 ; i < row_num; i++){
            for (unsigned int j = 0 ; j< col_num; j++){
                    address[i][j] = 0 ;
                } ;
            };
        };
  };



string Matrix::toString(){
    string result = "[";
    for (unsigned int i = 0 ; i < row_num; i++){
        for (unsigned int j = 0 ; j < col_num; j++){
            result = result + to_string(address[i][j]);
            if (j!=col_num-1){
            result = result + "," ;}
            else{if (i!=row_num-1){
                    result+=";";}
            }
        };
        if (i!=row_num-1){
            result+="\n";
        }else{
            result += "]";
        }
    }
    return  result;
};

Matrix operator+(Matrix m1,Matrix m2){
    Matrix m(m1.row_num,m1.col_num);
    if (m1.row_num!=m2.row_num || m1.col_num!=m2.col_num){
        cout<<"m1 do not have same column or row number with m2"<<endl;
    }else{

        for (unsigned int i=0;i<m1.row_num;i++){
            for (unsigned int j=0;j<m1.col_num;j++){
                m.address[i][j]=m1.address[i][j]+m2.address[i][j];
        }
    }}
    return m;
}

Matrix operator-(Matrix m1,Matrix m2){
    Matrix m(m1.row_num,m1.col_num);
    if (m1.row_num!=m2.row_num || m1.col_num!=m2.col_num){
        cout<<"m1 do not have same column or row number with m2"<<endl;
    }else{

        for (unsigned int i=0;i<m1.row_num;i++){
            for (unsigned int j=0;j<m1.col_num;j++){
                m.address[i][j]=m1.address[i][j]-m2.address[i][j];
        }
    }}
    return m;
}

Matrix operator*(Matrix m1,Matrix m2){
    Matrix m(m1.row_num,m2.col_num);
    if (m1.col_num!=m2.row_num){
        cout<<"m1 can not multiply with m2"<<endl;
    }else{
        for (unsigned int i=0;i<m1.row_num;i++){
            for (unsigned int j=0;j<m2.col_num;j++){
                for (unsigned int k=0;k<m2.row_num;k++){
                    m.address[i][j]=m1.address[i][k]*m2.address[k][j]+m.address[i][j];
                }

        }
    }}
    return m;
}

bool operator==(Matrix m1,Matrix m2){
    if (m1.col_num!=m2.col_num || m1.row_num!=m2.row_num){
        return 0;
    }else{
        for (unsigned int i=0;i<m1.row_num;i++){
            for (unsigned int j=0;j<m1.col_num;j++){
                // TODO
                if (~equal(m1.address[i][j],m2.address[i][j])){
                    return 0;}}}}
    return 1;
}

bool operator!=(Matrix m1,Matrix m2){
    if (!(m1==m2)){
        return 1;
    }else{
        return 0;}
}

Matrix operator^(Matrix m, int p){
    if (m.row_num!=m.col_num){
        cout<<"m is not square matrix"<<endl;
        return m;
    }else{
    if (p!=0){
        Matrix result(m.row_num,m.col_num);
        result=m.assign();
        if (p>1){
        while (p>1){
            result=result*m;
            p--;
        }
        return result;
        }else {return result;}}                                   //Needs inverse
    else{
        Matrix result("one",m.row_num);
        return result;
    }}
}


Matrix point_multiply(Matrix m1,Matrix m2){
    unsigned int rownum1=m1.getrownum();
    unsigned int colnum1=m1.getcolnum();
    unsigned int rownum2=m2.getrownum();
    unsigned int colnum2=m2.getcolnum();
    float **add1=m1.getaddress();
    float **add2=m2.getaddress();
    Matrix m(rownum1,colnum1);
    float **addm=m.getaddress();
    if (rownum1!=rownum2 || colnum1!=colnum2){
        cout<<"m1 do not have same column or row number with m2"<<endl;
    }else{
        for (unsigned int i=0;i<rownum1;i++){
            for (unsigned int j=0;j<colnum1;j++){
                addm[i][j]=add1[i][j]*add2[i][j];
        }
    }}
    return m;
}

Matrix point_square(Matrix m, int p){
    unsigned int rownum=m.getrownum();
    unsigned int colnum=m.getcolnum();
    float **add=m.getaddress();
    Matrix result(rownum,colnum);
    result=m.assign();
    float **addr=result.getaddress();
    for (unsigned int i=0;i<rownum;i++){
        for (unsigned int j=0;j<colnum;j++){
            for (int k=0;k<p-1;k++){
                addr[i][j]=add[i][j]*addr[i][j];
            }
         }}
    return result;
}

Matrix Matrix::Mask(Matrix mask){
    unsigned int colnum=mask.getcolnum();
    unsigned int rownum=mask.getrownum();
    Matrix m(row_num-rownum+1,col_num-colnum+1);
    float **add=m.getaddress();
    float **addm=mask.getaddress();
    for (unsigned int i=0;i<row_num-rownum+1;i++){
        for (unsigned int j=0;j<col_num-colnum+1;j++){
            for (unsigned int k=0;k<rownum;k++){
                for (unsigned int l=0;l<colnum;l++){
                    add[i][j]=add[i][j]+addm[k][l]*address[k+i][l+j];
                }
            }
        }
    }
    return m;
}

Matrix Matrix::assign(){
    Matrix m(row_num,col_num);
    for (unsigned int i=0;i<row_num;i++){
            for (unsigned int j=0;j<col_num;j++){
                    m.address[i][j]=address[i][j];
                }
        }
    return m;}


Matrix Matrix::trans(){
    Matrix m(col_num,row_num);
    for (unsigned int i=0;i<row_num;i++){
            for (unsigned int j=0;j<col_num;j++){
                    m.address[j][i]=address[i][j];
                }
        }
    return m;}



ostream & operator<<(std::ostream & os, Matrix m){
    return os<<m.toString();
};

float Matrix::mean(){
    float sum=0;
    float total_dim = col_num * row_num ;
    for (unsigned int i = 0 ; i < row_num ; i ++){
        for (unsigned int j = 0; j < col_num ; j++){
            sum= sum + address[i][j] ;
            // cout<<"sum is : "<<sum<<endl ;
            };

        };
    return  sum/total_dim ;


};                  // return the mean value of the matrix
float Matrix::maximum(){
    float comp = address[0][0] ;

    for (unsigned int i = 0 ; i < row_num ; i ++){
        for (unsigned int j = 0; j < col_num ; j++){
            if (address[i][j]>comp){
                comp = address[i][j] ;

            };

        };

};
    return  comp  ;
};

float Matrix::minimum(){
    float comp = address[0][0] ;

    for (unsigned int i = 0 ; i < row_num ; i ++){
        for (unsigned int j = 0; j < col_num ; j++){
            if (address[i][j]<comp){
                comp = address[i][j] ;

            };

        };

};
     return  comp  ;
};

float Matrix::norm(){
    float sum=0;
    float total_dim = col_num * row_num ;
    for (unsigned int i = 0 ; i < row_num ; i ++){
        for (unsigned int j = 0; j < col_num ; j++){
            sum= sum + ((address[i][j])*(address[i][j])) ;
            // cout<<"sum is : "<<sum<<endl ;
            };

        };
    return  sum/total_dim ;
};

Matrix Matrix::inv(){

   // First needed to check whether the determinant of the matrix is 0 or not, if it's 0, if it is not 0 then to calculate the invertible matrix
    // considering the order n csae
    Matrix result = Matrix(row_num,col_num);
    cout<<"\n\nInverse of matrix is: \n";
    for(unsigned int i = 0; i < col_num; i++){
        for(unsigned int j = 0; j < 3; j++)
            cout<<((address[(j+1)%3][(i+1)%3] * address[(j+2)%3][(i+2)%3]) - (address[(j+1)%3][(i+2)%3] * address[(j+2)%3][(i+1)%3]))/det()<<"\t";

        cout<<"\n";
    };

    int n = col_num ;
    for(int i=0;i<n;i++)
    {
       for(int j=n;j<2*n;j++)
       {
           if(i==j-n)
              result.address[i][j]=1;
          else
              result.address[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
       int t=result.address[i][i];
       for(int j=i;j<2*n;j++)
           result.address[i][j]=result.address[i][j]/t;
       for(int j=0;j<n;j++)
       {
          if(i!=j)
          {
             t=result.address[j][i];
             for(int k=0;k<2*n;k++)
                 result.address[j][k]=result.address[j][k]-t*result.address[i][k];
           }
       }
    }

    for(int i=0;i<n;i++)
    {
       for(int j=n;j<2*n;j++)
          cout<<"\t"<<result.address[i][j];
       cout<<"\n";
     }
    return result ;

};

float Matrix::det(){
    float determinant = 0;
    //finding determinant
    for(unsigned int i = 0; i < col_num; i++){
     //   for (unsigned int j = 0 ; j < col_num ; i++){
        determinant = determinant + (address[0][i] * (address[1][(i+1)%3] * address[2][(i+2)%3] - address[1][(i+2)%3] * address[2][(i+1)%3]));
//}
};
    return determinant ;
}

bool equal(float a, float b){
    if ((a-b<float(0.000001) && a-b>=0) || (b-a<float(0.000001) && b-a>=0)){
        return 1;
    }else {
        return 0;
    }
}

float *Matrix::operator[](unsigned int p){
    return address[p];
}
