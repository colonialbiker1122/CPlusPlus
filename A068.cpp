//PRINT FULL PYRAMID USING * - 2
#include<iostream>
using namespace std;

int main() {
    int i,j,k,a;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=1;i<=a;i++) {
        for(j=a-i;j>=0;j--) {
            cout<<"  ";
        }
        k=(1 + (i-1)*2 );
        while(k>0) {
            cout<<"* ";
            k--;
        }
        cout<<endl;
    }
    return 0;
}