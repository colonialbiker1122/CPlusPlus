#include<iostream>
using namespace std;

int main () {
    int a[3][3], b[3][3];
    cout<<"First Matrix:\n";
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<"Enter value at position ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<"Second Matrix:\n";
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<"Enter value at position ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>b[i][j];
        }
    }

    cout<<"Addition result Matrix:\n";
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<a[i][j] + b[i][j]<< "\t";
        }
        cout<<"\n";
    }

    cout<<"Subtraction result Matrix:\n";
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout<<a[i][j] - b[i][j]<< "\t";
        }
        cout<<"\n";
    }

    int temp;
    cout<<"Matrix Multiplication Result:\n";
    temp=0;
    for( int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                temp += a[i][k] * b[k][j];
            }
            cout<<temp<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}