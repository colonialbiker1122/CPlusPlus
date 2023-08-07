//Create 2 classes named base and derived. Show the use of Virtual Functions
#include<iostream>
using namespace std;

class base{
  public:
    void display() {
        cout<<"I am Base class\n";
    }
    virtual void show() {
        cout<<"Show base\n";
    }
};

class derived : public base{
  public:
    void display() {
        cout<<"I am Derived class\n";
    }
    void show() {
        cout<<"Show derived\n";
    }
};

int main() {
    base b1;
    derived d1;
    base *bptr;
    bptr = &b1;

    bptr->show();
    bptr->display();

    bptr = &d1;
    bptr->show();
    bptr->display();
    return 0;
}