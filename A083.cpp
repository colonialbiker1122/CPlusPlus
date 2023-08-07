//Calculate factorial of a number using recursion
#include<iostream>
using namespace std;

int myfact(int ap) {
    if(ap == 0) {
        return 1;
    } else {
        return ap * myfact(ap-1);
    }
}

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Factorial of number is : "<<myfact(a)<<endl;
    return 0;
}