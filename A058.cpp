//CHECK WHETHER AN ALPHABET IS VOWEL OR CONSONANT USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter an alphabet : ";
    cin>>a;

    switch(a) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"The alphabet is a VOWEL"<<endl;
        break;

        default:
        cout<<"The alphabet is a CONSONANT"<<endl;
    }

    return 0;
}