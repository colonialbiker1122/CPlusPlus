//READ AN INTEGER AND PRINT FIRST 3 POWERS (n^1, n^2, n^3)
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"First power of the number is : "<<a<<endl;
    cout<<"Second power of the number is : "<<a*a<<endl;
    cout<<"Third power of the number is : "<<a*a*a<<endl;
    return 0;
}