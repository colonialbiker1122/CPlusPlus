//PRINT INVERTED HALF PYRAMID USING *
#include<iostream>
using namespace std;

int main() {
    int a,i,j;
    cout<<"Enter number of rows : ";
    cin>>a;

    for(i=a;i>0;i--) {
        for(j=i;j>0;j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}