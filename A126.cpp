//Read the file country and capital and diplay the merged content i.e Read simultaneously from 2 files
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream if1, if2;
    if1.open("country");
    if2.open("capital");

    char mystring[20];
    const int N = 20;
    for(int i=0; i<3; i++) {
        cout<<"Country: ";
        if1.getline(mystring, N);
        cout<<mystring<<endl;
        cout<<"Capital: ";
        if2.getline(mystring, N);
        cout<<mystring<<endl;
    }

    if1.close();
    if2.close();
    return 0;
}