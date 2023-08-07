//WAP a command line argument type file program to take the input of filename in the command line terminal and write and read the ‘Hi…’ message on the file.
#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char * argv[]) {
    ifstream if1;
    char mystring[20];
    if1.open(argv[1]);
    if1.getline(mystring, sizeof(mystring));
    cout<<mystring;
    if1.close();
    return 0;
}