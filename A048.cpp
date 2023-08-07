//CHECK WHETHER A CHARACTER IS UPPERCASE, LOWERCASE, SPECIAL CHARACTER OR DIGIT
#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if(a >= 65 && a <= 90) {
        cout<<"The character is an UPPERCASE alphabet"<<endl;
    } else if(a >= 97 && a<= 122) {
        cout<<"The character is a lowercase alphabet"<<endl;
    } else if ( a>= 48 && a <= 57) {
        cout<<"The character is a digit"<<endl;
    } else {
        cout<<"The character is a special character"<<endl;
    }
    return 0;
}