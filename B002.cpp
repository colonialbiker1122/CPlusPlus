//FIND MAXIMUM OF 2 NUMBERS
#include<iostream>
using namespace std;

int main() {
    int a,b,ans;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    ans = a>b ? a : b ;

    cout<<"Maximum of both numbers is : "<<ans<<endl;
    return 0;
}