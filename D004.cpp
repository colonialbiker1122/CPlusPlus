//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.
#include<iostream>
#include<cmath>
using namespace std;

class triangle{
    private:
        float a,b,c,p,s,area;
    public:
        triangle(int ap, int bp, int cp) {
            a = ap;
            b = bp;
            c = cp;
        }
        void display() {
            p = a+b+c;
            s = p/2;
            cout<<"Perimeter of the triangle is : "<<p<<" units"<<endl;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area of the triangle is : "<<area<<" sq.units"<<endl;
        }
};

int main() {
    triangle a1(3,4,5);
    a1.display();
    return 0;
}