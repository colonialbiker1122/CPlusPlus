//CHECK WHETHER A TRIANGLE IS EQUILATERAL, ISOSCELES OR SCALENE
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the length of First side of Triangle : ";
    cin>>a;
    cout<<"Enter the length of Second side of Triangle : ";
    cin>>b;
    cout<<"Enter the length of Thrid side of Triangle : ";
    cin>>c;
    if (a == b && b == c) {
        cout<<"The triangle is EQUILATERAL"<<endl;
    } else if ( a == b || b==c || a == c) {
        cout<<"The triangle is ISOSCELES"<<endl;
    } else {
        cout<<"The triangle is SCALENE"<<endl;
    }
    return 0;
}