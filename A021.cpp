//SIMPLE CALCULATOR USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    char o;
    int a,b,ans;
    cout<<"Enter operation to be performed (+, -, *, /) : ";
    cin>>o;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    switch(o) {
        case '+' :
        cout<<"Addition of numbers is : "<<a+b<<endl;
        break;

        case '-' :
        cout<<"Subtraction of second number from the first is : "<<a-b<<endl;
        break;

        case '*' :
        cout<<"Multiplication of numbers is : "<<a*b<<endl;
        break;

        case '/' :
        cout<<"Quotient of numbers is : "<<a/b<<endl;
        break;

        default :
        cout<<"Wrong operator !!"<<endl;
        break;
    }

    return 0;
}