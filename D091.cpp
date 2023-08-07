//Create a class with one data member and save an array of objects in a file. Count and display the number of object in the file
#include<iostream>
#include<fstream>
using namespace std;

class test{
    char name[20];
  public:
    void setdata() {
        cout<<"Enter name: ";
        cin>>name;
    }

    void writedata() {
        cout<<name<<endl;
    }
};

int main() {
    test t1[3];
    int i;
    for(i=0; i<3; i++) {
        cout<<"Item "<<i+1<<":"<<endl;
        t1[i].setdata();
    }

    ofstream of1;

    of1.open("file11.txt");
    of1.write((char *) & t1, sizeof(t1));
    of1.close();

    ifstream if1;

    if1.open("file11.txt");
    if1.seekg(0, ios::end);
    int end = if1.tellg();
    cout<<"Number of objects stores is: "<<end/sizeof(t1[1])<<endl;
    if1.close();

    return 0;
}