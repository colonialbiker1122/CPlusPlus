//Create a class matrix which will calculate the multiplication of two matrices using inline function mult()
#include<iostream>
using namespace std;

class Matrix{
    int a[10][10];
    int r,c;
  public:
    Matrix() {
        r=c=0;
    }
    void setdata();
    friend inline Matrix mult(Matrix, Matrix);
    void display();
};

void Matrix :: display() {
    int i,j;
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            cout<< a[i][j] << "\t";
        }
        cout<<endl;
    }
}

void Matrix :: setdata() {
    int i,j;
    cout<<"Enter number of rows (max 10): ";
    cin>>r;
    cout<<"Enter number of columns (max 10): ";
    cin>>c;
    if(r< 11 && c< 11 && r > 0 && c>0) {
        for(i=0; i<r; i++) {
            for(j=0; j<c; j++) {
                cout<<"Enter value of matrix at position ["<<i+1<<"]["<<j+1<<"]";
                cin>>a[i][j];
            }
        }
    } else {
        cout<<"Failure: Dimensions of matrix are INVALID\n";
    }
}

inline Matrix mult(Matrix m1, Matrix m2) {
    Matrix ans;
    if(m1.c == m2.r) {
        ans.r = m1.r;
        ans.c = m2.c;
        int i, j, k;
        for(i=0; i<ans.r; i++) {
            for(j=0; j<ans.c; j++) {
                ans.a[i][j] = 0;
                for(k=0; k<m1.c ; k++) {
                    ans.a[i][j] += m1.a[i][k] * m2.a[k][j]; 
                }
            }
        }
    } else {
        cout<<"FAILURE: Matrix Dimensions not compatible for multiplication";
    }
    return ans;
}

int main() {
    Matrix a1, a2, a3;
    cout<<"Matrix 1:\n";
    a1.setdata();
    cout<<"Your Matrix 1 is:\n";
    a1.display();
    cout<<"Matrix 2:\n";
    a2.setdata();
    cout<<"Your matrix 2 is:\n";
    a2.display();
    a3 = mult(a1, a2);
    cout<<"Multiplication of Matrix 1 and Matrix 2 is:\n";
    a3.display();
    return 0;
}