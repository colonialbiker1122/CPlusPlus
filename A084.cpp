//Write a function power() to raise a number m to a power n. Function takes double value for m and int value for n. Use default value of 2 for n.
#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n=2) {
    return pow(m,n);
}

int main() {
    int n;
    double m;
    cout<<"Enter value of m : ";
    cin>>m;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Result of m raised to the power n is : "<<power(m,n)<<endl;
    cout<<"Enter value of a number to caluculate square : ";
    cin>>m;
    cout<<"Square of number is : "<<power(m)<<endl;
    return 0;
}