//Constructors and Destructors in Derived Classes Example - 2
#include<iostream>
using namespace std;

class A{
    int a;
  public:
    A() {}

    A(int a) {
        this->a = a;
    }

    ~A() {
        cout<<"Object A being Destroyed...\n";
    }

    void show_A() {
        cout<<a<<endl;
    }
};

class B{
    int b;
  public:
    B() {}

    B(int b) {
        this->b = b;
    }

    ~B() {
        cout<<"Object B being Destroyed...\n";
    }

    void show_B() {
        cout<<b<<endl;
    }
};

class C : public A, public B {
    int c;
  public:
    C() : A(), B() {}

    C(int c1, int c2, int c3) : A(c1), B(c2) {
        c = c3;
    }

    ~C() {
        cout<<"Object C being Destroyed...\n";
    }

    void show_C() {
        show_A();
        show_B();
        cout<<c<<endl;
    }
};

int main() {
    C *ptr;
    ptr = new C(10, 20, 30);
    ptr->show_C();
    delete ptr;
    return 0;
}