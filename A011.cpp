//FIND ROOTS OF A QUADRATIC EQUATION
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c,d,r1,r2;
    cout<<"Every quadratic equation is expressed in the form ax2 + bx + c = 0"<<endl;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
    d=sqrt(b*b - 4*a*c);
    if(d<0) {
        cout<<"Real roots do not exist !!";
        exit(0);
    }
    r1 = (-b + d)/(2*a);
    r2 = (-b - d)/(2*a);
    cout<<"Roots of the equation are "<<r1<<" and "<<r2<<endl; 
    return 0;
}