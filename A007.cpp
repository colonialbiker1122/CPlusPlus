//SWAP TWO NUMBERS USING 2 VARIABLES
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter First number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swapping :"<<endl<<"First number is : "<<a<<endl;
    cout<<"Second number is : "<<b;
    return 0;
}