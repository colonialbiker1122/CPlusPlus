//Create a class root, make member function void calc() which will calculate the root having value of linear coefficient b as default argument
#include<iostream>
#include<cmath>
using namespace std;

class root{
    private:
        float r1,r2,d;
    public:
        void calc(float a, float c, float b=10) {
            d = b*b - (4*a*c);
            r1 = (-b + sqrt(d))/(2*a);
            r2 = (-b - sqrt(d))/(2*a);
            cout<<"Roots of the equation are  : "<<r1<<" and "<<r2<<endl;
        }
};

int main() {
    root x;
    float a,b,c;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
    x.calc(a,c,b);
    cout<<"Value of ans with b = 10 (default argument) is : "<<endl;
    x.calc(a,c);
    return 0;
}