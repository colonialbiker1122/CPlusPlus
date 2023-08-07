//Use of pointers in Base Class and Derived Class
#include<iostream>
using namespace std;

class Base{
  public:
    int b;
    void show() {
        cout<<"b: "<<b<<endl;
    }
};

class Derived : public Base{
  public:
    int d;
    void show() {
        cout<<"b: "<<b<<endl;
        cout<<"d: "<<d<<endl;
    }
};

int main() {
    Base *bptr;
    Base b1;
    bptr = &b1;

    bptr->b = 10;
    bptr->show();

    Derived d1;
    bptr = &d1;
    bptr->b = 20;
    bptr->show();
    
    Derived *dptr;
    dptr = &d1;
    dptr->b = 100;
    dptr->d = 200;
    dptr->show();

    return 0;
}