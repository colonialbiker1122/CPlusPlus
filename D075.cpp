//Constructors and Destructors in Derived Classes Example
#include<iostream>
using namespace std;

class A{
    int a;
  public:
    A() {}
    
    A(int d) {
        a = d;
    }
    
    ~A() {
        cout<<"Object A is being Destroyed...\n";
    }

    void show() {
        cout<<a<<endl;
    }
};

class B : public A {
    int b;
  public:
    B() : A() {}
    
    B(int d, int d1) : A(d) {
        b = d1;
    }

    ~B() {
        cout<<"Object B being destroyed...\n";
    }

    void show() {
        cout<<b<<endl;
    }
};

int main() {
    B *p;
    p = new B(10, 20);
    p->A :: show();
    p->show();
    delete p;
    return 0;
}