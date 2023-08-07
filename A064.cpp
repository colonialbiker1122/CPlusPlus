//PRINT HALF PYRAMID USING ALPHABETS - 2
#include<iostream>
using namespace std;

int main() {
    int a,i,j;
    char c;
    cout<<"Enter number of rows : ";
    cin>>a;
    for(i=1;i<=a;i++) {
        c = i + 64;
        for(j=1;j<=i;j++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}