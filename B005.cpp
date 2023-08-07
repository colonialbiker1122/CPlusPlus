//SIMPLE CALCULATOR USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    char c;
    int a,b;
    cout<<"Enter operation to be performed (+, -, *, /) : ";
    cin>>c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    switch(c) {
        case '+':
        cout<<"Addition of both numbers is : "<<a+b<<endl;
        break;

        case '-':
        cout<<"Difference of both numbers is : "<<a-b<<endl;
        break;

        case '*':
        cout<<"Product of both numbers is : "<<a*b<<endl;
        break;

        case '/':
        cout<<"Division answer is : "<<a/b<<endl;
        break;

        default:
        cout<<"Invalid operation";
        break;
    }
    return 0;
}