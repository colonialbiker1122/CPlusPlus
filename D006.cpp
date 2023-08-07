//Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include<iostream>
using namespace std;

class rectangle{
    private:
        float a,b,area;
    public:
        void setDim(int ap, int bp) {
            a = ap;
            b = bp;
        }
        void getArea() {
            area = a*b;
            cout<<"Area of the rectangle is : "<<area<<" sq.units"<<endl;
        }
};

int main() {
    rectangle a1;
    a1.setDim(2,3);
    a1.getArea();
    return 0;
}