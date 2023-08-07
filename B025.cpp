//Create a class area which will calculate and display the areas of circle, triangle and rectangle with the use of constructors and will pass data members as default arguments.
#include<iostream>
using namespace std;

class area{
    float cir,rect,sq,tri;
  public:
    area() {
       float r,s,a,b,p,q;
       cout<<"Enter radius : "<<endl;
       cin>>r;
       cir = 3.14*r*r;
        cout<<"Enter side of square : ";
        cin>>s;
        sq = s*s;
        cout<<"Enter length of rectangle : ";
        cin>>a;
        cout<<"Enter breadth of rectangle : ";
        cin>>b;
        rect = a*b;
        cout<<"Enter base of triangle : ";
        cin>>p;
        cout<<"Enter height of triangle : ";
        cin>>q;
        tri = 0.5*p*q;
    }
    void display() {
       cout<<"Area of circle is : "<<cir<<endl; 
        cout<<"Area of triangle is : "<<tri<<endl; 
        cout<<"Area of square is : "<<sq<<endl; 
        cout<<"Area of rectangle is : "<<rect<<endl; 
}
};

int main() {
    area a1;
    a1.display();
    return 0;
}