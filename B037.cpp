//Create a class named item with 3 data members i.e name, code and cost. Include features for display, update, and insertion of new objects
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class item{
    char name[20];
    float cost;
  public:
    void setdata() {
        cout<<"Enter Item name: ";
        cin>>name;
        cout<<"Enter Item cost: ";
        cin>>cost;
    }

    void writedata() {
        cout<<name<<"\t"<<cost<<endl;
    }

    friend void displayfile();
    friend void addData();
    friend void updateData();
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

void updateData() {
    fstream f1;
    item i1;
    item i2;
    f1.open("file15.txt", ios::in | ios::binary | ios::out);
    char sname[20];
    int i=0, loc;
    cout<<"Enter Item Name which has to be updated: ";
    cin>>sname;
    while(!f1.eof()) {
        loc = f1.tellg();
        f1.read((char *) & i1, sizeof(i1));
        if(f1) {
            if(strcmp(sname, i1.name) == 0) {
                i2.setdata();
                f1.seekp(loc);
                f1.write((char *) & i2, sizeof(i2));
                break;
            }
        } 
        f1.close();
        }        
}

int main() {
    displayfile();
    updateData();
    displayfile();
    return 0;
}