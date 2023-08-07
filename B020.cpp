//WAP to find transpose of a matrix with object as return type to a non-member function trans().
#include<iostream>
using namespace std;

class myMatrix{
    int a[10][10];
    int r,c;
  public:
    myMatrix() {
        r=c=0;
    }
    void setdata();
    void display();
    friend myMatrix trans(myMatrix);
};

void myMatrix :: display() {
    int i,j;
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            cout<< a[i][j] << "\t";
        }
        cout<<endl;
    }
}

void myMatrix :: setdata() {
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

myMatrix trans(myMatrix p) {
    myMatrix ans;
    ans.r = p.c;
    ans.c = p.r;
    int i,j;
    for(i=0; i<p.r; i++) {
        for(j=0; j<p.c; j++) {
            ans.a[j][i] = p.a[i][j];
        }
    }
    return ans;
}

int main() {
    myMatrix a1,a2;
    a1.setdata();
    cout<<"Your matrix is:\n";
    a1.display();
    a2 = trans(a1);
    cout<<"Transpose of the matrix is:\n";
    a2.display();
    return 0;
}