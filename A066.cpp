//PRINT INVERTED HALF PYRAMID USING NUMBERS
#include<iostream>
using namespace std;

int main() {
    int i,j,a,b;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=a;i>0;i--) {
        for(j=i;j>0;j--) {
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}