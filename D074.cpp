//Create a class named faculty with id and name as data member and getdata() to initialize the data members. Create a class details derived from faculty with data members as age and yrsofexp and getdata()  to initialize the data members and display()
#include<iostream>
using namespace std;

class faculty{
  public:
    int id;
    char name[20];
    void getdata() {
        cout<<"Enter faculty ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
    }
};

class details : faculty{
  public:
    int age, yrsofexp;
    void getdetails() {
        getdata();
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter years of experience: ";
        cin>>yrsofexp;
    }

    void display() {
        cout<<"Faculty ID: "<<id<<endl;
        cout<<"Name of faculty: "<<name<<endl;
        cout<<"Faculty age: "<<age<<endl;
        cout<<"Faculty years of experience: "<<yrsofexp<<endl;
    }
};

int main() {
    details d1;
    d1.getdetails();
    d1.display();
    return 0;
}