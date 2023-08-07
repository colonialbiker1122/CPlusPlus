//Constructors in Derived Class Example
#include<iostream>
using namespace std;

class A{
  protected:
    int a1, a2;
  public:
    A(int ap1, int ap2) {
        a1 = ap1;
        a2 = ap2;
    }

    void display() {
        cout<<"a1: "<<a1<<endl;
        cout<<"a2: "<<a2<<endl;
    }
};

class B{
  protected:
    int b1, b2;
  public:
    B(int bp1, int bp2) {
        b1 = bp1;
        b2 = bp2;
    }

    void display() {
        cout<<"b1: "<<b1<<endl;
        cout<<"b2: "<<b2<<endl;
    }
};

class D : public A, public B {
  protected:
    int d1, d2;
  public:
    D(int a1, int a2, int b1, int b2, int d1, int d2) : A(a1, a2), B(b1, b2) {
        this->d1 = d1;
        this->d2 = d2;
    }

    void display() {
        cout<<"d1: "<<d1<<endl;
        cout<<"d2: "<<d2<<endl;
    }
};

int main() {
    D obj1(8, 11, 13, 12, 15, 18);
    obj1.A :: display();
    obj1.B :: display();
    obj1.display();
    return 0;
}