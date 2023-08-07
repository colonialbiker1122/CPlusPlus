//CHECK WHETHER A CHARACTER IS VOWEL OR CONSONANT
#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character : ";
    cin>>a;
    if(a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u') {
        cout<<"Character is a vowel"<<endl;
    } else {
        cout<<"Character is a consonant"<<endl;
    }
    return 0;
}