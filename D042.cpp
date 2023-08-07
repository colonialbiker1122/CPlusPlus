//Construct a matrix of sixe mxn using constructors
#include<iostream>
using namespace std;

class matrix{
    private:
        int **p;
        int d1,d2;
    public:
        matrix(int ,int);
        void get(int i, int j, int value) {
            p[i][j] = value;
        }
        int & put(int i, int j) {
            return p[i][j];
        }
};

matrix :: matrix(int x, int y) {
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i=0; i<d1; i++) {
        p[i] = new int[d2];
    }
}

int main() {
    int m,n;
    cout<<"Enter number of rows of matrix : ";
    cin>>m;
    cout<<"Enter number of columns of matrix : ";
    cin>>n;
    matrix A(m,n);
    cout<<"Enter matrix elements row by row :\n";
    int i, j, value;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            cin>>value;
            A.get(i,j,value);
        }
    }
    cout<<"\n";
    cout<<A.put(1,2);
    return 0;
}