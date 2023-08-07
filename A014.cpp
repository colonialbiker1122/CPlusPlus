//FIND FACTORIAL OF A NUMBER
#include<iostream>
using namespace std;

int main() {
    int a,i,fact=1;
    cout<<"Enter a number : ";
    cin>>a;
    for(i=a;i>0;i--) {
        fact *= i;
    }
    cout<<"Factorial of the number is : "<<fact<<endl;
    return 0;
}