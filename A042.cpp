//CALCULATE SIMPLE INTEREST
#include<iostream>
using namespace std;

int main() {
    float p,n,r;
    cout<<"Enter Principal amount : ";
    cin>>p;
    cout<<"Enter rate of interest (%): ";
    cin>>r;
    cout<<"Enter time period in years : ";
    cin>>n;
    cout<<"Simple interest on the principal amount is : "<<p*n*r/100<<endl;
    return 0;
}