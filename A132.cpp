//Write a C++ Program to Count Digits, Alphabets and Spaces using File Handling.
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream if1;
    
    if1.open("file17.txt");
    int nalpha = 0, ndigit = 0, nspaces = 0;
    char c;
    while( !if1.eof() ) {
        if1.get(c);
        if(c >= 65 && c <= 90 || c >= 97 && c <= 122) {
            nalpha++;
        } else if (c >= 48  && c <= 57) {
            ndigit++;
        } else if( c == 32) {
            nspaces++;
        }
    }
    if1.close();
    cout<<"Alphabets: "<<nalpha<<endl;
    cout<<"Digits: "<<ndigit<<endl;
    cout<<"Spaces: "<<nspaces<<endl;
    return 0;
}