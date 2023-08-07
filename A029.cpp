//CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int b,a,c,i,l=0,r,ans=0;
    cout<<"Enter a number : ";
    cin>>a;

    b=a;
    c=a;
    while(b>0) {
        b=b/10;
        l++;
    }
    l=l-1;
    for(i=0;a>0;i++) {
        r = a%10;
    ans = ans + r*pow(10,l-i);
    a=a/10;
    }

    cout<<"Reverse of the number is "<<ans<<endl;

    if(ans == c) {
        cout<<"Number is a palindrome"<<endl;
    } else {
        cout<<"Number is not a palindrome"<<endl;
    }
    return 0;
}