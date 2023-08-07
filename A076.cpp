//Write a function using reference variables as arguments to swap the vaules of a pair of integers
#include<iostream>
using namespace std;

void myswap(int & a1, int & a2) {
    int temp;
    temp = a1;
    a1 = a2;
    a2 = temp;
    cout<<"After swapping : "<<endl;
    cout<<"First integer is : "<<a1<<endl;
    cout<<"Second integer is : "<<a2<<endl;
}

int main() {
    int a,b;
    cout<<"Enter first integer : ";
    cin>>a;
    cout<<"Enter second integer : ";
    cin>>b;
    myswap(a,b);
    return 0;
}