//DISPLAY FIBONACII SERIES - 1
#include<iostream>
using namespace std;

int main() {
    int a,b,c,n,i;
    cout<<"Enter the number of terms of fibonacci series : ";
    cin>>n;
    a=0;b=1;c=a+b;
    if(n == 1) {
        cout<<a<<endl;
    } else if (n == 2) {
        cout<<a<<" "<<b<<endl;
    } else if(n > 2) {
        a=0;b=1;c=a+b;
    cout<<a<<" "<<b<<" "<<c<<" ";
        for(i=4;i<=n;i++) {
            a=b;b=c;c=a+b;
    cout<<c<<" ";
        }
    } else {
        cout<<"Invalid Input";
    }
    return 0;
}