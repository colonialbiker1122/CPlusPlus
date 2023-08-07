//FIND GCD OF 2 NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a,b,i=1,ans;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    while(i<=a && i<=b) {
        if(a%i == 0 && b%i == 0) {
            ans=i;
        }
        i++;
    }
    cout<<"GCD of both numbers is : "<<ans;
    return 0;
}