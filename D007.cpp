//Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include<iostream>
using namespace std;

class rectangle{
    private:
        float a,b,area;
    public:
        rectangle(int ap, int bp) {
            a = ap;
            b = bp;
        }
        void returnArea() {
            area = a*b;
            cout<<"Area of rectangle is : "<<area<<" sq.units"<<endl;
        }
};

int main() {
    float a,b;
    cout<<"Enter length of side of a rectangle : ";
    cin>>a;
    cout<<"Enter length of adjacent side rectangle : ";
    cin>>b;
    rectangle a1(a,b);
    a1.returnArea();
    return 0;
}