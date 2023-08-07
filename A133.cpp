//Write a program to generate user defined message:”Special Characters are not Allowed” using exception. Program will display this message when user tries to enter any special characters while scanning the name of the person.
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    char c;
    cout<<"Start to enter your text: ";
    try{
        while( true ) {
            if( _kbhit() ) {
                c = _getch();
                cout<<c;
                if(! (c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48  && c <= 57 || c == 32) ) {
                    throw 1;
                }
            }
        }
    } catch(int) {
        cout<<"\nSpecial Characters are not Allowed\n";
    }
    return 0;
}