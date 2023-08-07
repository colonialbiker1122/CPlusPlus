//CHECK WHETHER A NUMBER IS PRIME NUMBER OR NOT
#include<iostream>
using namespace std;

int main() {
    int a,i,c=0;
    cout<<"Enter a number : ";
    cin>>a;
    for(i=2;i<a;i++) {
        if(a%i == 0) {
            c++;
        }
    }
    if(c == 0) {
        cout<<"Number is a prime number"<<endl;
    } else {
        cout<<"Number is not a prime number"<<endl;
    }
    return 0;
}