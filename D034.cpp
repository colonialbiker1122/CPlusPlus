//Returning Objects: Write a function that receives two matrix objects as arguments and return a new matrix object containing their multiplication result
#include<iostream>
using namespace std;

class matrix{
    private:
        int m[3][3];
    public:
        void get();
        void display();
        friend matrix multiply(matrix ,matrix);
};

void matrix :: get() {
    int i,j;
    cout<<"Enter matrix Values : "<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<"Enter value of m["<<i<<"]["<<j<<"] : ";
            cin>>m[i][j];
        }
    }
}

void matrix :: display() {
    int i,j;
    cout<<"Matrix is : "<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<m[i][j]<<"\t";
        }
    cout<<"\n";
    }
}

matrix multiply(matrix p1, matrix p2) {
    matrix mul;
    int i,j,k;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            mul.m[i][j] = 0;
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                mul.m[i][j] += p1.m[k][i] * p2.m[j][k]; 
            }
        }
    }
    return mul;
}

int main() {
    matrix a1,a2,a3;
    a1.get();
    a2.get();
    a3 = multiply(a1,a2);
    cout<<"After multiplication : "<<endl;
    a3.display();
    return 0;
}