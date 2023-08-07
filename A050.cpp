//CHECK WHETHER A NUMBER IS DIVISIBLE BY 5 AND 11 or NOT
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a%5 == 0 && a%11 == 0) {
        cout<<"The number is divisibe by 5 and 11"<<endl;
    } else {
        cout<<"The number is NOT divisible by 5 and 11"<<endl;
    }
    return 0;
}