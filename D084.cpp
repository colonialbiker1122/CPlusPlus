//Virtual Destructor Example
#include<iostream>
using namespace std;

class B{
  public:
    B() {
        cout<<"Base class Created\n";
    }

    virtual ~B() {
        cout<<"Base Class Destroyed\n";
    }
};

class D : public B {
  public:
    D() {
        cout<<"Derived class Created\n";
    }

    ~D() {
        cout<<"Derived Class destroyed\n";
    }
};

int main() {
    B *bptr;
    D *dptr;
    dptr = new D;
    bptr = new B;

    bptr = dptr;
    delete bptr;

    return 0;
}