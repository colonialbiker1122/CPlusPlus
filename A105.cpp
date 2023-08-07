//Create a menu driven program to perform add (append) and Display multiple student records using file handling
#include<iostream>
#include<fstream>
using namespace std;

void add_record (string n1, int a1, float p1) {
    ofstream of1;
    of1.open("file04.txt", ios_base::app);
    of1 << "Name : " << n1 <<endl;
    of1 << "Age : " << a1 <<endl;
    of1 << "Percentage : " << p1 <<endl<<"\n";
    of1.close();
    cout<<"Record added Successfully !\n";
}

void display_all_records() {
    ifstream if1;
    string l1;
    if1.open("file04.txt");
    cout<<"Displaying all records :\n";
    while ( if1 ) {
        getline(if1, l1);
        cout<<l1<<endl;
    }
    if1.close();
}

int main() {
    int n;
    char exit;
    string name;
    int age;
    float percentage;
    do {
        cout<<"1: Add new record\n";
        cout<<"2: Display all records\n";
        cout<<"3: Exit\n";
        cout<<"Enter operation to perform : ";
        cin>>n;

        switch(n) {
            case 1:
            cout<<"Enter First name of student : ";
            cin>>name;
            cout<<"Enter age of student : ";
            cin>>age;
            cout<<"Enter Overall percentage of student : ";
            cin>>percentage;
            add_record(name, age, percentage);
            break;

            case 2:
            display_all_records();
            break;

            case 3:
            cout<<"Are you sure you want to exit ? (Type Y and Enter) : ";
            cin>>exit;
            if(exit == 'Y') {
                cout<<"Terminating Program...\n";
                return 0;
            }
            break;

            default:
            cout<<"Invalid Operation\n";
        }
    } while( n != 3 );
    return 0;
}