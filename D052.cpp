//Create a class named named complex with 2 floating point data members. Overload the + operator to perform addition of 2 objects of class complex
#include<iostream>
using namespace std;

class complex{
    float a,b;
  public:
    void get(float, float);
    void display();
    complex operator + (complex);
};

void complex :: get (float ap, float bp) {
    a = ap;
    b = bp;
}

void complex :: display() {
    cout<<"z = "<<a<<" + "<<b<<"i\n";
}

complex complex :: operator+ (complex cp) {
    complex ans;
    ans.a = a + cp.a;
    ans.b = b + cp.b;
    return ans;
}

int main() {
    float a1, b1;
    complex c1, c2, c3;
    cout<<"Complex number is of the form z = a + bi\n";
    cout<<"For first complex number...\n";
    cout<<"Enter value of a: ";
    cin>>a1;
    cout<<"Enter value of b: ";
    cin>>b1;
    c1.get(a1, b1);
    
    cout<<"For second complex number...\n";
    cout<<"Enter value of a: ";
    cin>>a1;
    cout<<"Enter value of b: ";
    cin>>b1;
    c2.get(a1, b1);
    
    c3 = c1 + c2;
    cout<<"First complex number is: ";
    c1.display();
    cout<<"Second complex number is: ";
    c2.display();
    cout<<"Addition of both complex numbers is: ";
    c3.display();
    return 0;
}