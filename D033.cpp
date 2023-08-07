//Returning Objects: Create a class named matrix with a data member m[n][n] and functions read(), display() and friend function to find transpose of the matrix into a new object
#include<iostream>
using namespace std;

class matrix{
    private:
        int m[3][3];
    public:
        void read();
        void display();
        friend matrix trans(matrix );
};

void matrix :: read() {
    int i,j;
    cout<<"Enter Matrix : "<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<"Enter value of matrix : m["<<i<<"]["<<j<<"] : ";
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

matrix trans(matrix p1) {
    matrix m2;
    int i,j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            m2.m[i][j] = p1.m[j][i];
        }
    }
    return m2;
}

int main() {
    matrix o1,o2;
    o1.read();
    o1.display();
    o2 = trans(o1);
    cout<<"Transpose : "<<endl;
    o2.display();
    return 0;
}