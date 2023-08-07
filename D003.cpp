//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.
#include<iostream>
#include<cmath>
using namespace std;

class triangle{
    private:
        float a,b,c,p,area,s;
    public:
        void get(){
            cout<<"Enter length of first side : ";
            cin>>a;
            cout<<"Enter length of second side : ";
            cin>>b;
            cout<<"Enter length of third side : ";
            cin>>c;
        }
        void display(){
            p = a+b+c;
            s = p/2;
            cout<<"Perimeter of the triangle is : "<<p<<" units"<<endl;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"Area of the triangle is : "<<area<<" sq.units"<<endl;
        }
};

int main() {
    triangle a1;
    a1.get();
    a1.display();
    return 0;
}