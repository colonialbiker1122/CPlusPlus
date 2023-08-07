//Create a class A having private integer data member a, having public integer data member b and public function void set_ab()- initialize a & b, void get_a()- return value of a, void show()- print the value of a. Create a class B which will derive public from base class and data member c and function multiplication()- multiply and display the product.
#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        int b;
        void set_ab() {
            cout<<"Enter value of a : ";
            cin>>a;
            cout<<"Enter value of b : ";
            cin>>b;
        }
        int get_a () {
            return a;
        }
        void show() {
            cout<<"Value of a is : "<<a<<endl;
        }
};

class B : public A {
    private:
        int c;
    public:
        void multiplication() {
            c = get_a() * b;
            cout<<"Value of multiplication is : "<<c<<endl;
        }
};

int main() {
    B b1;
    b1.set_ab();
    b1.show();
    b1.multiplication();
    return 0;
}