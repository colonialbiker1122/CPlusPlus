//FIND ROOTS OF QUADRATIC EQUATION USING SWITCH CASE
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c,d,r1,r2;
    cout<<"Quadratic Equations are expressed in the form of ax2 + bx + c = 0"<<endl;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
    d=b*b - 4*a*c;

    switch(d>0) {
        case 1:
        d = sqrt(d);
        r1 = (-b + d)/(2*a);
        r2 = (-b - d)/(2*a);
        cout<<"First Root of the equation is : "<<r1<<endl;
        cout<<"Second Root of the equation is : "<<r2<<endl;
        break;

        case 0: 
            switch(d == 0) {
                case 1:
                r1 = (-b - d)/(2*a);
                cout<<"Roots of the equation are equal. Value is : "<<r1<<endl;
                break;

                case 0:
                cout<<"Real root DO NOT EXIST !!"<<endl;
                break;
            }
        break;
    }
    return 0;
}