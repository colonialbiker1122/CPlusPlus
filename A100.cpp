//Scan the Name and Age of a person and save it in a text file. Display the file contents after filling up the information
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream a1;
    int n1;
    string s1;
    a1.open("file01.txt");
    cout<<"Enter a number : ";
    cin>>n1;
    a1 << n1 << endl;
    cout<<"Enter a string : ";
    cin>>s1;
    a1 << s1 << endl;
    a1.close();

    ifstream b1;
    b1.open("file01.txt");
    b1 >> s1;
    cout<< s1 << endl;
    b1 >> s1;
    cout<< s1 << endl;
    b1.close();

    return 0;
}