// /Create a class named item with 3 data members i.e name, code and cost. Read and write class objects using file handling techniques
#include<iostream>
#include<fstream>
using namespace std;

class item{
    char name[20];
    int code;
    float cost;
  public:
    void setdata() {
        cout<<"Enter Code: ";
        cin>>code;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Cost: ";
        cin>>cost;
    }

    void writedata() {
        cout<<"Name: "<<name<<endl
            <<"Code: "<<code<<endl
            <<"Cost: "<<cost<<endl;
    }
};

int main() {
    item batch1[3];

    ifstream if1;
    ofstream of1;

    of1.open("file10.txt");
    int i;
    for(i=0; i<3; i++) {
        cout<<"Item "<<i+1<<":"<<endl;
        batch1[i].setdata();
        of1.write((char *) & batch1[i], sizeof(batch1[i]));
    }
    of1.close();

    if1.open("file10.txt");
    for(i=0; i<3; i++) {
        if1.read((char *) & batch1[i], sizeof(batch1[i]));
        batch1[i].writedata();
    }
    if1.close();
    return 0;
}