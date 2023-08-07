//CHECK WHETHER A CHARACTER IS ALPHABET OR NOT
#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if( a >= 65 && a<= 90 || a >= 97 && a<= 122 ) {
        cout<<"The character is an alphabet"<<endl;
    } else {
        cout<<"The character is not an alphabet"<<endl;
    }
    return 0;
}