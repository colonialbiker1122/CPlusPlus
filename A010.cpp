//FIND LARGEST NUMBER AMONG 3 NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if( a>b && a>c) {
        cout<<"First number is greatest";
    } else if ( b > c) {
        cout<<"Second number is gretest";
    } else {
        cout<<"Third number is greatest";
    }
    return 0;
}