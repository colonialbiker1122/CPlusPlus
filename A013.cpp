//CHECK LEAP YEAR
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a year : ";
    cin>>a;
    if(a % 4 == 0 && a%100 != 0) {
        cout<<"It is a leap year";
    } else if ( a%100 == 0 && a%400 == 0) {
        cout<<"It is a leap year";
    } else {
        cout<<"It is not a leap year";
    }
    return 0;
}