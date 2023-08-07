//FIND QUOTIENT AND REMAINDER
#include<iostream>
using namespace std;

int main() {
    int d,s,q,r;
    cout<<"Enter Dividend : ";
    cin>>d;
    cout<<"Enter Divisor : ";
    cin>>s;
    q=d/s;
    r=d%s;
    cout<<"Quotient is : "<<q<<"\nRemainder is : "<<r;
    return 0;
}