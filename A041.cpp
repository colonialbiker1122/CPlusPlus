//FIND AREA OF TRIANGLE USING 3 SIDES
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a,b,c,s,area,sub;
    cout<<"Enter the length of first side : ";
    cin>>a;
    cout<<"Enter the length of seconde side : ";
    cin>>b;
    cout<<"Enter the length of third side : ";
    cin>>c;

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Are of the triangle is : "<<area<<" sq. units"<<endl;
    return 0;
}