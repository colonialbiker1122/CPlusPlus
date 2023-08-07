//Binary Operator Overloading
#include<iostream>
using namespace std;

class mycomplex{
    private:
        float real,img;
    public:
        mycomplex() : real(2), img(2){}

        void get() {
            cout<<"Enter real part of Complex number : ";
            cin>>real;
            cout<<"Enter imaginary part of Complex number : ";
            cin>>img;
        }

        mycomplex operator + (mycomplex c)  {
            mycomplex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }

        void display() {
            cout<<"Addition of complex numbers is : "<<real<<" + "<<img<<"i"<<endl;
        }
};

int main() {
    mycomplex a1,a2,a3;
    a1.get();
    a2.get();
    a3 = a1 + a2;
    a3.display();
    return 0;
}