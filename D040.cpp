//Copy Constructor: Create a class named code with a single data member id. Use copy constructor to copy data from one object to another object.
#include<iostream>
using namespace std;

class code{
    private:
        int id;
    public:
        code() {
            cout<<"Enter value of id : ";
            cin>>id;
        }
        code(code & a1) {
            id = a1.id;
        }
        void display() {
            cout<<"Value of id is : "<<id<<endl;
        }
};

int main() {
    code a1,a2;
    cout<<"Object 1 :\n";
    a1.display();
    cout<<"Object 2 :\n";
    a2.display();
    code a3(a2);
    cout<<"Object 3 :\n";
    a3.display();
    return 0;
}