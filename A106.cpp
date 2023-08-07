//Merge 2 files into a new single file using File Handling
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    string s1,s2, s3;
    cout<<"Merge 2 files into a new single file using C++ File management\n";
    cout<<"Enter name of first file: ";
    cin>>s1;
    cout<<"Enter name of second file: ";
    cin>>s2;
    ofstream of3;
    ifstream if1, if2, if3;
    if1.open(s1);
    if2.open(s2);
    of3.open("file06.txt");
    while ( if1 ) {
        getline(if1, s3);
        of3 <<s3<< endl;
    }
    while ( if2 ) {
        getline(if2, s3);
        of3 << s3 <<endl;
    }
    if1.close();
    if2.close();
    of3.close();
    cout<<"SUCCESS: Files Merged Successfully. Check out the merged file at file06.txt\n";
    return 0;
}