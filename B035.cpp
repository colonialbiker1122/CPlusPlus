//Create a file ‘text’ with some text in it and read the file and save them in different file accordingly weather they are in upper case or lower case.
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1;
    ifstream if1;
    of1.open("text.txt");
    of1<<"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
    of1.close();

    char mys[350];
    if1.open("text.txt");
    of1.open("textcopy.txt");
    cout<<"Contents of the file are:\n";
    while(if1) {
        if1.getline(mys, sizeof(mys));
        cout<<mys<<endl;
        of1<<mys;
    }
    if1.close();
    of1.close();

    cout<<"File 'text.txt' has been read and all the content is copied into file 'textcopt.txt'\n";    
    return 0;
}