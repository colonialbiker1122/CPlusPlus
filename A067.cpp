//PRINT FULL PYRAMID USING * - 1
#include<iostream>
using namespace std;

int main() {
    int a,i,j,k;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=1;i<=a;i++) {
        for(j=a-i;j>0;j--) {
            cout<<" ";
        }
        for (k=1;k<=i;k++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}