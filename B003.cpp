//FIND MAXIMUM OF 3 NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"Greatest number is : "<<a<<endl;
    } else if (b>c) {
        cout<<"Greatest number is : "<<b<<endl;
    } else {
        cout<<"Greatest number is : "<<c<<endl;
    }
    
    return 0;
}