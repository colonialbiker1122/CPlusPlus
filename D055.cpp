//Create a class FLOAT that contains 1 float data member. Overload all the 4 arithmetic operators so that they operate on the objects of FLOAT
#include<iostream>
using namespace std;

class FLOAT{
    float a;
  public:
    FLOAT(float a=0) {
        this->a = a;
    }
    FLOAT operator+ (FLOAT ap) {
        FLOAT temp;
        temp.a = a + ap.a;
        return temp;
    }
    FLOAT operator- (FLOAT ap) {
        FLOAT temp;
        temp.a = a - ap.a;
        return temp;
    }
    FLOAT operator* (FLOAT ap) {
        FLOAT temp;
        temp.a = a * ap.a;
        return temp;
    }
    FLOAT operator/ (FLOAT ap) {
        FLOAT temp;
        temp.a = a / ap.a;
        return temp;
    }
    float display() {
        return a;
    }
};

int main() {
    float a1,a2;
    cout<<"Enter first floating integer: ";
    cin>>a1;
    cout<<"Enter Second floating integer: ";
    cin>>a2;
    FLOAT f1(a1),f2(a2),f3;
    f3 = f1 + f2;
    cout<<"Addition result is: "<<f3.display()<<endl;
    f3 = f1 - f2;
    cout<<"Subtraction result is: "<<f3.display()<<endl;
    f3 = f1 * f2;
    cout<<"Multiplication result is: "<<f3.display()<<endl;
    f3 = f1 / f2;
    cout<<"Division result is: "<<f3.display()<<endl;
    return 0;
}