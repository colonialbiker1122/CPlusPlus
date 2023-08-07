//Write a program to read a matrix of size mxn from the keyboard and display the same on the screen using functions. Make row parameter of the matrix as a default argument
#include<iostream>
using namespace std;

void mymatrix(int np, int mp = 3) {
    int i,j,temp;
    int matrix[mp][np];
    for(i=0;i<mp;i++) {
        for(j=0;j<np;j++) {
            cout<<"Enter value of element at position matrix["<<i<<"]["<<j<<"] : ";
            cin>>temp;
            matrix[i][j] = temp;
        }
    }

    for(i=0;i<mp;i++) {
        for(j=0;j<np;j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
    int m,n;
    cout<<"Enter number of rows of matrix : ";
    cin>>m;
    cout<<"Enter number of columns of matrix : ";
    cin>>n;
    mymatrix(m,n);
    cout<<"Enter number of columns of a matrix : ";
    cin>>n;
    mymatrix(n);
    return (0);
}