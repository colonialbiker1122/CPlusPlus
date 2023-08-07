//SCAN ANGLES OF A TRIANGLE AND CHECK WHETHER THE TRIANGLE IS VALID OR NOT
#include<iostream>
using namespace std;

int main() {
    float a,b,c;
    cout<<"Enter first angle of triangle : ";
    cin>>a;
    cout<<"Enter second angle of triangle : ";
    cin>>b;
    cout<<"Enter third angle of triangle : ";
    cin>>c;
    if(a != 0 && b != 0 && c != 0) {
        if ( a + b + c == 180) {
            cout<<"The triangle is VALID"<<endl;
        } else {
            cout<<"The triangle is NOT VALID"<<endl;
        }
    } else {
        cout<<"The triangle is NOT VALID"<<endl;
    }
}