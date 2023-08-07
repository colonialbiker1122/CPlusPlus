//CONVERT A DECIMAL INTO A BINARY NUMBER using Array
#include<iostream>
using namespace std;

int main() {
    int a[10],i,n;
    cout<<"Enter a decimal number to convert it into binary : ";
    cin>>n;
    for(i=0;n>0;i++) {
        a[i] = n%2;
        n = n/2;
    }
    cout<<"Binary number is : ";
    for(i = i-1;i>=0;i--) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}