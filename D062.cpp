//Create a base class B and Derived class D. Class B contains one private member, one public data member and 3 public member functions i.e set_ab(), get_a() and show_a(). Class D contains one private data member and 2 public member functions i.e mul() and display()
#include<iostream>
using namespace std;

class B{
    int a;
  public:
    int b;
    void set_ab();
    int get_a();
    void show_a();
};

class D : public B {
    int c;
  public:
    void mul();
    void display();
};

void B :: set_ab() {
    a = 10;
    b = 20;
}

int B :: get_a() {
    return a;
}

void B :: show_a() {
    cout<<a<<endl;
}

void D :: mul() {
    c = b * get_a();
}

void D :: display() {
    cout<<"Value of multiplication is: "<<c<<endl;
}

int main() {
    D d1;
    d1.set_ab();
    d1.mul();
    d1.show_a();
    d1.display();

    d1.b = 5;
    d1.mul();
    d1.display();
    return 0;
}