//Scan the name of a file and display its contents
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream if1;
    string s1, s2;
    cout<<"Enter name of the file to view : ";
    cin>>s1;
    if1.open(s1);
    if(!if1) {
        cout<<"FAILURE: File does NOT EXIST !!!\n";
        exit(0);
    }
    while(if1) {
        getline(if1, s2);
        cout<<s2<<endl;
    }
    if1.close();
    return 0;
}