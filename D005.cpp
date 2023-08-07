//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;

class rectangle{
    private:
        float a,b,area;
    public:
        rectangle(int a1, int b1) {
            a = a1;
            b = b1;
        }
        void Area() {
            area = a*b;
            cout<<"Area of the rectangle is : "<<area<<" sq.units"<<endl;
        } 
};

int main() {
    rectangle a1(4,5),a2(5,8);
    a1.Area();
    a2.Area();
    return 0;
}