//Demonstrate a program using tellg()
//Dont know why at the end of the file, the last character is displayed twice
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1;
    ifstream if1;
    string s1;
    char c1;
    int i1;
    of1.open("file03.txt");

    if( !of1 ) {
        cout<<"Error... Something Went Wrong !!!\n";
        exit(0);
    }
    //Text in the file
    of1 << "sumukh.kesarla@outlook.com";

    of1.close();

    if1.open("file03.txt");
    if( !if1 ) {
        cout<<"Error... Something Went Wrong !!!\n";
        exit(0);
    }

    cout<<"When file is opened, position of the pointer is : "<<if1.tellg()<<endl;
    cout<<"Contents of the file are :\n";

    while ( !if1.eof() ) {
        cout<<"Position is : "<<if1.tellg()<<" ";
        if1 >> c1;
        cout<<"Character is : "<<c1<<endl;
    }

    if1.close();
    return 0;
}