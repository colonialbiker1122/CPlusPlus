//Write a program to calculate factorial of an integer using pointer to function concept
#include<iostream>
using namespace std;

typedef int (*fptr) (int);

int factorial(int p) {
    if(p == 1) {
        return 1;
    } else {
        return p * factorial(p-1);
    }
}

int main() {
    int n, ans;
    cout<<"Enter a number: ";
    cin>>n;
    fptr f1;
    f1 = &factorial;
    ans = f1(n);
    cout<<"Factorial is: "<<ans<<endl;
    return 0;
}