//Write a program to compute the area of triangle and circle by overloading area() function
#include<iostream>
using namespace std;

float area(float bp, float hp) {
    return 0.5*bp*hp;
}

float area(float rp) {
    return 3.14*rp*rp;
}

int main() {
    float ans,b,h,r;
    cout<<"Enter the base of triangle : ";
    cin>>b;
    cout<<"Enter height of triangle : ";
    cin>>h;
    ans = area(b,h);
    cout<<"Area of triangle is : "<<ans<<" sq.units"<<endl;
    cout<<"Enter radius of circle : ";
    cin>>r;
    ans = area(r);
    cout<<"Area of circle is : "<<ans<<" sq.units"<<endl;
    return 0;
}