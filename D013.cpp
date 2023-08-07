//Scan the age of a student and display it using Dynamic Memory Allocation
#include<iostream>
using namespace std;

class student{
    private:
        int age;
    public:
        student() {
            cout<<"Enter Age of student : ";
            cin>>age;
        }
        void display() {
            cout<<"Age of student is : "<<age<<endl;
        }
};

int main() {
    student *ptr;
    ptr = new student;
    ptr->display();

    delete ptr;
    return 0;
}