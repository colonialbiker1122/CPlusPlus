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

        void add(complex a1p, complex a2p) {
            cout<<"Addition of complex numbers is : "<<a1p.a + a2p.a<<" + "<<a1p.b + a2p.b<<"i"<<endl;
        }
        friend void myadd(complex a1p, complex a2p);
};

void myadd(complex a1p, complex a2p) {
    cout<<"Addition of complex numbers is : "<<a1p.a + a2p.a<<" + "<<a1p.b + a2p.b<<"i"<<endl;
}

int main() {
    complex a1, a2;
    cout<<"Using friend function...\n";
    myadd(a1,a2);

    complex a3, a4;
    cout<<"Without using Friend function...\n";
    myadd(a3,a4);
    return 0;
}
