//CHECK WHETHER A CHARACTER IS LOWERCASE OR UPPERCASE
#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if (a>=65 && a<=90) {
        cout<<"Character is UPPERCASE"<<endl;
    } else {
        cout<<"Character is lowercase"<<endl;
    }
    return 0;
}