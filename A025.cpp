//CHECK WHETHER A NUMBER IS EVEN OR ODD
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;

    if(a>0) {
    if(a%2 == 0) {
        cout<<"Number is even";
    } else {
        cout<<"Number is odd";
    }
    } else {
        cout<<"Cant find answer";
    }
    return 0;
}