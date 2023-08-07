//SCAN INTEGER ARRAY OF 5 ELEMENTS
#include<iostream>
using namespace std;

int main() {
    int a[5],i;
    cout<<"Enter 5 integer values : "<<endl;

    for(i=0;i<5;i++) {
        cout<<"Enter value of a["<<i<<"] : ";
        cin>>a[i];
    }

    cout<<endl;

    for(i=0;i<5;i++) {
        cout<<"Value of a["<<i<<"] is : "<<a[i]<<endl;
    }
    return 0;
}