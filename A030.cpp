//CHECK WHETHER A NUMBER IS AN AMRSTONG NUMBER OR NOT
#include<iostream>
using namespace std;

int main() {
    int r,a,add=0,b,i;
    cout<<"Enter a number : ";
    cin>>a;
    b=a;

    while(a>0) {
        r = a%10;
        add = add+ r*r*r;
        a = a/10;
    }

    if(b == add) {
        cout<<"The number is an Armstrong number"<<endl;
    } else {
        cout<<"The number is not an Armstrong number"<<endl;
    }

    return 0;
}