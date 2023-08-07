//PRINT FULL PYRAMID USING NUMBERS
//INCOMPLETE
#include<iostream>
using namespace std;

int main() {
    int a,i,j,k,l;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=1;i<=a;i++) {
        for(j=a-i;j>=0;j--) {
            cout<<"  ";
        }
        k = 2*i-1;
        l=0;
        while(k>0) {
            cout<<k+l<<" ";
            k--;
        }
        cout<<endl;
    }
    return 0;
}