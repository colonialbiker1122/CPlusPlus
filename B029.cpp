//Create a class A having private integer data member a, having public integer data member b and public function void set_ab()- initialize a & b, void get_a()- return value of a, void show()- print the value of a. Create a class B which will derive public from base class and data member c and function multiplication()- multiply and display the product
#include<iostream>
using namespace std;

class A{
    int a;
  public:
    int b;

    void set_ab(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int get_a() {
        return a;
    }

    void show() {
        cout<<a<<endl;
    }
};

class B : private A { //public
    int c;
  public:
    void multiplication() {
        c = get_a() * b;
        cout<<"Multiplication of a and b is: "<<c<<endl;
    }
};

int main() {
    B ob1;
    ob1.set_ab(3,4);
    ob1.multiplication();
    return 0;
}