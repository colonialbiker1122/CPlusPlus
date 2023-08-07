//Write a program to calculate variance and standard deviation of n numbers
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,i,xi;
    float xbar=0,var=0,sd;
    cout<<"Enter number of elements : ";
    cin>>n;
    int *ptr;
    ptr = new int[n];

    for(i=0;i<n;i++) {
        cout<<"Enter value of element "<<i+1<<" : ";
        cin>>*(ptr+i);
        xbar = xbar + *(ptr+i);
    }
    xbar = xbar/n;
    cout<<"Value of xbar is : "<<xbar<<endl;

    for(i=0;i<n;i++) {
        xi = *(ptr+i);
        cout<<*(ptr+i);
        var = var + (xi-xbar)*(xi-xbar);
    }
    var = var/n;
    cout<<"Variance is : "<<var<<endl;

    sd = sqrt(var);
    cout<<"Standard devation is : "<<sd<<endl;

    return 0;
}