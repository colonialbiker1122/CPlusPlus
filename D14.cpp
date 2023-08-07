//Create a class named person with string variable name and integer variable age. Create object of class and scan the values using appropriate functions and scope resolution operator
#include<iostream>
#include<string>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        void get();
        void display();
};

void person :: get() {
    cout<<"Enter name of person : ";
    cin>>name;
    cout<<"Enter age of person : ";
    cin>>age;
}

void person :: display() {
    cout<<"Name of person is : "<<name<<endl;
    cout<<"Age of the person is : "<<age<<endl;
} 

int main() {
    person a1;
    a1.get();
    a1.display();
    return 0;
}