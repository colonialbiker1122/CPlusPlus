//Hybrid Inheritance
#include<iostream>
using namespace std;

class W{
    public:
        W() {
          cout<<"I am class W\n";  
        }
};

class X : public W{
    public:
        X() {
          cout<<"I am class X. I am derived from class W\n";  
        }
};

class Y{
    public:
        Y() {
          cout<<"I am class Y\n";  
        }
};

class Z{
    public:
        Z() {
          cout<<"I am class Z\n";  
        }
};

class A : public X,Y,Z{
    public:
        A() {
          cout<<"I am class A. I am derived from class X,Y,Z\n";  
        }
};

class B : public A{
    public:
        B() {
          cout<<"I am class B. I am derived from class A\n";  
        }
};

class C : public A{
    public:
        C() {
          cout<<"I am class C. I am derived from class A\n";  
        }
};

int main() {
    cout<<"An object of class C is created -\n";
    C onj;
    return 0;
}