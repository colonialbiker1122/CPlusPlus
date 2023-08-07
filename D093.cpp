//A file contains a list of names and their telephone numbers. The names contain only one word and the name and telephone numbers are separated by white spaces. Write a program to read the file and output the list in 2 columns. The names should be left justified and the numbers should be right justified. Use a class object to store each set of data.
#include<iostream>
#include<fstream>
using namespace std;

class telerecord{
    char name[30];
    long long number;
  public:
    void setdata() {
        cout<<"Enter name and telephone number separated by a blank space: ";
        cin>>name>>number;
    }

    void writedata() {
        cout.width(30);
        cout<<name;
        cout.width(14);
        cout<<number<<endl;
    }
};

int main() {
    int n, i;
    telerecord t1;
    cout<<"Enter number of Records to enter: ";
    cin>>n;

    ofstream of1;
    ifstream if1;

    of1.open("file14.txt");
    for(i=0; i<n; i++) {
        t1.setdata();
        of1.write((char *) & t1, sizeof(t1));
    }
    of1.close();
    cout<<"Contents of the file are:\n";
    if1.open("file14.txt");
    for(i=0; i<n; i++) {
        if1.read((char *) & t1, sizeof(t1));
        t1.writedata();
    }
    if1.close();
    return 0;
}