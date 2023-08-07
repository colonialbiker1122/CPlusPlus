//Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.
#include<iostream>
using namespace std;

class complex{
    private:
        float a,b;
    public:
        complex() {
            cout<<"Enter real part of complex number : ";
            cin>>a;
            cout<<"Enter imaginary part of complex number : ";
            cin>>b;
        }
        friend void myadd(complex a1p, complex a2p);
        friend void mysub(complex a1p, complex a2p);
        friend void mymul(complex a1p, complex a2p);
        friend void mydiv(complex a1p, complex a2p);
};

void myadd(complex a1p, complex a2p) {
    cout<<"Addition of complex numbers is : "<<a1p.a + a2p.a<<" + "<<a1p.b + a2p.b<<"i"<<endl;
}

void mysub(complex a1p, complex a2p) {
    cout<<"Subtraction of complex numbers is : "<<a1p.a - a2p.a<<" + "<<a1p.b - a2p.b<<"i"<<endl;
}

void mymul(complex a1p, complex a2p) {
    cout<<"Multiplication of complex numbers is : "<<a1p.a * a2p.a<<" + "<<a1p.b * a2p.b<<"i"<<endl;
}

void mydiv(complex a1p, complex a2p) {
    cout<<"Division of complex numbers is : "<<a1p.a / a2p.a<<" + "<<a1p.b / a2p.b<<"i"<<endl;
}

int main() {
    complex a1, a2;
    myadd(a1,a2);
    mysub(a1,a2);
    mymul(a1,a2);
    mydiv(a1,a2);
    return 0;
}