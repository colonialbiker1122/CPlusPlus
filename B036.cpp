#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class item{
    char name[20];
    float price;
  public:
    void setdata() {
        cout<<"Enter Item name: ";
        cin>>name;
        cout<<"Enter Item price: ";
        cin>>price;
    }

    void writedata() {
        cout<<name<<"\t"<<price<<endl;
    }

    friend void displayfile();
    friend void addData();
};

void displayfile() {
    item i1;
    int i=0;
    ifstream if1;
    if1.open("file15.txt");
    cout<<"Contents of the file are:\n";
    while(if1.read((char *) & i1, sizeof(i1))) {
        i1.writedata();
        i++;
    }
    cout<<"Number of Objects: "<<i<<endl;
    if1.clear();
    if1.close();
}

void addData() {
    item i1;
    ofstream of1;
    of1.open("file15.txt", ios::app);
    i1.setdata();
    of1.write((char *) & i1, sizeof(i1));
    of1.close();
}

int main() {
    displayfile();
    addData();
    addData();
    displayfile();
    return 0;
}