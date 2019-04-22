#ifndef MYMATRIX_H
#define MYMATRIX_H

#include <iostream>
#include "string"
#include <vector>
#include <cstdlib>
using namespace std ;

class Matrix{
public:

    Matrix(); // m * n matrix
    Matrix(unsigned int rownum, unsigned int colnum);
    Matrix(vector<vector<int>> &vec);
    Matrix(vector<vector<float>> &vec);
    Matrix(vector<float> &vec, unsigned int rownum, unsigned int colnum);
    float **getaddress();
    unsigned int getcolnum();
    unsigned int getrownum();
    std::string toString();
    float mean();                       // return the mean value of the matrix
    float maximum();
    float minimum();
    float norm();
    Matrix(std::string symbol,  unsigned int n);
    float det();
    void subMatrix(int );
    Matrix Mask(Matrix mask);
   // Matrix(std::string symbol,  unsigned int n); // special matrix like I , O matrix
   /* ~Matrix();

    int norm() ;                      // return the norm of the matrix
    std::vector<int> size(Matrix m);  // return the size of the matrix
    int mean();                       // return the mean value of the matrix
    int maximum();
    int minimum();
    std::string toString();

    int getEntry(std::vector<int> index) ;    // retunr the entry by index
    int setEntry(std::vector<int> index, int element);  // reset the entry
    std::vector<int> getRow(int row);                   // get a row
    std::vector<int> getColumn(int col);                // get a column

    std::vector<std::vector<int>> eigenvector();
    std::vector<int> eigenvalue();


    friend std::ostream & operator<<(std::ostream &os, Matrix M);
    //friend std::istream & operator>>(std::istream &os, Matrix M);*/
    Matrix trans();                             // return the transposed matrix
    friend Matrix operator+(Matrix m1,Matrix m2);   // +
    friend Matrix operator-(Matrix m1,Matrix m2);    // -
    friend Matrix operator*(Matrix m1,Matrix m2);   // *
  //  friend Matrix operator/(Matrix m1,Matrix m2);
    friend bool operator==(Matrix m1,Matrix m2); // ==
    friend bool operator!=(Matrix m1,Matrix m2);// !=
    float *operator[](unsigned int p);
    friend Matrix operator^(Matrix m, int p);

    friend std::ostream & operator<<(std::ostream &os, Matrix M);
    Matrix assign();
    Matrix inv();
    Matrix eigenVector() ;
    Matrix eigenValue() ;
   // friend bool operator!=(float a, float b) ;

private:
    unsigned int row_num=1;
    unsigned int col_num=1;
    float **address = nullptr;


};

Matrix operator+(Matrix m1,Matrix m2);   // +
Matrix operator-(Matrix m1,Matrix m2);    // -
Matrix operator*(Matrix m1,Matrix m2);   // *
Matrix operator/(Matrix m1,Matrix m2);
bool operator==(Matrix m1,Matrix m2); // ==
bool operator!=(Matrix m1,Matrix m2);
Matrix operator^(Matrix m, int p);
Matrix point_multiply(Matrix m1,Matrix m2);
Matrix point_square(Matrix m, int p);

bool equal(float a, float b);

#endif // MYMATRIX_H
