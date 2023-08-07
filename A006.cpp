//SWAP TWO NUMBERS WITH 3 VARIBLES
#include<iostream>
using namespace std;

int main() {
    int a,b,t;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    t=b;
    b=a;
    a=t;
    cout<<"After swapping : "<<endl;
    cout<<"First number is : "<<a<<endl;
    cout<<"Second number is : "<<b<<endl;
    return 0;
}