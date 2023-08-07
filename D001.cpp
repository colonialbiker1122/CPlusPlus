//Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        string name;
        int roll_no;
    public:
        void myinput() {
            cout<<"Enter the name of student : ";
            cin>>name;
            cout<<"Enter Roll number of student : ";
            cin>>roll_no;
        }
        void display() {
            cout<<"Name of student is : "<<name<<endl;
            cout<<"Roll number of student is : "<<roll_no<<endl;
        }   
};

int main() {
    student a1;
    a1.myinput();
    a1.display();
    return 0;
}