//Pure Virtual Function Example
#include<iostream>
using namespace std;

class base{
  public:
    virtual void example() = 0;
};

class derived1 : public base {
  public:
    void example() {
        cout<<"This is Derived Class 1\n";
    }
};

class derived2 : public base {
  public:
    void example() {
        cout<<"This is Derived Class 2\n";
    }
};

int main() {
    base *arr[2];
    derived1 d1;
    derived2 d2;

    arr[0] = &d1;
    arr[1] = &d2;

    arr[0]->example();
    arr[1]->example();
    return 0;
}