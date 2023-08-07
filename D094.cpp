//Write an interactive menu driven programthat will access the file created in the previous program (D093) and implement the following tasks: (a) Determine the telephone number of a specified person (b) Determine the name of a telephone number is know (c) Update the telephone number whenever there is a change (d) Add new records
#include<iostream>
#include<fstream>
#include<cstring>
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

    friend void searchName();
    friend void searchNumber();
    friend void addRecord();
    friend void showRecords();
    friend void updateRecord();
};

void searchName(){
    long long snum;
    cout<<"Enter the Telephone number: ";
    cin>>snum;
    ifstream if1;
    telerecord t1;
    int flag=0;

    if1.open("file14.txt");
    while(!if1.eof()) {
        if1.read((char *) & t1, sizeof(t1));
        if(t1.number == snum) {
            cout<<"Record found:\n";
            t1.writedata();
            flag++;
            break;
        }
    }
    if1.close();

    if(flag == 0) {
        cout<<"Record does not exist with the entered Telephone number!!\n";
    }
}

void searchNumber(){
    char sname[30];
    cout<<"Enter the Name of person: ";
    cin>>sname;
    ifstream if1;
    telerecord t1;
    int flag=0;

    if1.open("file14.txt");
    while(!if1.eof()) {
        if1.read((char *) & t1, sizeof(t1));
        if(strcmp(t1.name, sname) == 0) {
            cout<<"Record found:\n";
            t1.writedata();
            flag++;
            break;
        }
    }
    if1.close();

    if(flag == 0) {
        cout<<"Record does not exist with the entered Telephone number!!\n";
    }
}

void addRecord(){
    ofstream of1;
    telerecord t1;
    of1.open("file14.txt", ios::app);
    t1.setdata();
    of1.write((char *) & t1, sizeof(t1));
    of1.close();
    cout<<"SUCCESS: New Record added Successfully";
}

void showRecords(){
    ifstream if1;
    telerecord t1;

    cout.width(30);
    cout<<"Name";
    cout.width(14);
    cout<<"Number"<<endl;
    if1.open("file14.txt");
    while(!if1.eof()) {
        if1.read((char *) &t1, sizeof(t1));
        t1.writedata();
    }
    if1.close();
}

void updateRecord(){
    long long snum, unum;
    cout<<"Enter the Telephone number: ";
    cin>>snum;
    fstream f1;
    telerecord t1, t2;
    int flag=0, loc;

    f1.open("file14.txt", ios::binary | ios::out | ios::in);
    while(!f1.eof()) {
        loc = f1.tellg();
        f1.read((char *) & t1, sizeof(t1));
        if(t1.number == snum) {
            cout<<"Record found:\n";
            t1.writedata();
            flag++;
            cout<<"Enter new Telephone number: ";
            cin>>t2.number;
            strcpy(t2.name, t1.name);
            f1.seekp(loc);
            f1.write((char *) & t2, sizeof(t2));
            break;
        }
    }
    f1.close();

    if(flag == 0) {
        cout<<"Record does not exist with the entered Telephone number!!\n";
    }
}

int main() {
    int c;
    cout<<"Welcome to the Telephone Directory !!\n";
    while(1){
        cout<<"\n1: Show existing Records\n";
        cout<<"2: Add new Record\n";
        cout<<"3: Search a record via name\n";
        cout<<"4: Search a record via telephone number\n";
        cout<<"5: Update a record via telephone number\n";
        cout<<"6: Exit Program\n";
        cout<<"Enter operation code: ";
        cin>>c;
        switch(c) {
            case 1:
            showRecords();
            break;

            case 2:
            addRecord();
            break;

            case 3:
            searchNumber();
            break;

            case 4:
            searchName();
            break;

            case 5:
            updateRecord();
            break;

            case 6:
            cout<<"Program Terminating...";
            exit(0);

            default:
            cout<<"FAILURE: Operation Code NOT Valid\n";
        }
    }
    return 0;
}