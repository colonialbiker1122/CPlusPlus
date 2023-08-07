//Write a program using 2 separate inline functions for multiplication and division of integers
#include<iostream>
using namespace std;

inline int mymul(int ap, int bp) {
    return ap*bp;
}

inline int mydiv(int ap, int bp) {
    return ap/bp;
}

int main() {
    int a,b;
    cout<<"Enter first nummber : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Multiplication of both numbers is : "<<mymul(a,b)<<endl;
    cout<<"Division of both numbers is : "<<mydiv(a,b)<<endl;
    return 0;
}