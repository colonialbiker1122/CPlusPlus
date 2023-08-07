//Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        string name;
        string address;
        int roll_no;
        long long phno;
    public:
        void get(){
            cout<<"Enter Name of new student : ";
            fflush(stdin);
            getline(cin, name);
            cout<<"Enter Roll number of student : ";
            fflush(stdin);
            cin>>roll_no;
            cout<<"Enter address of student : ";
            fflush(stdin);
            getline(cin, address);
            cout<<"Enter Phone number of student : ";
            fflush(stdin);
            cin>>phno;
        }
        void display(){
            cout<<"Name of student is : "<<name<<endl;
            cout<<"Roll number of student is : "<<roll_no<<endl;
            cout<<"Phone number of student is : "<<phno<<endl;
            cout<<"Address of student is : "<<address<<endl;
        }
};

int main() {
    student a1,a2;
    a1.get();
    a2.get();
    a1.display();
    a2.display();
    return 0;
}