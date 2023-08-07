//Write a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. (just to make you familiar with initialization lists)
#include<iostream>
using namespace std;

class volume{
    private:
        float l,b,h,vol;
    public:
        volume(int a1 = 2, int a2 = 3, int a3 = 4) : l(a1), b(a2), h(a3) {}
        void mycal() {
            vol = l*b*h;
            cout<<"Volume of the cuboid is : "<<vol<<" cube units"<<endl;
        }
};

int main() {
    volume a1(2,4,5);
    a1.mycal();
    volume a2;
    a2.mycal();
    return 0;
}