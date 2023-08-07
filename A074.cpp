//Write a program to read the values of a, b and c display the values of x, where x = a/b-c
#include<iostream>
using namespace std;

int main() {
    float a,b,c,x;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
    x = a/b-c;

    cout<<"Value of x is : "<<x<<endl;
}