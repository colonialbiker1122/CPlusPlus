//FIND LCM OF 2 NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a,b,i,l,h,ans;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    h = a>b ? a : b ;

    do {
        if(h%a == 0 && h%b == 0 ) {
            cout<<"LCM of both numbers is : "<<h;
            break;
        } else {
            h++;
        }
    } while (true);

    return 0;
}