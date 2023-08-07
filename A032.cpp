//DISPLAY PALINDROME NUMBERS BETWEEN 2 INTERVALS
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int r,a,b,l=0,k=0,n1,n2,i,j,ans=0;
    cout<<"Enter interval with lower number first"<<endl;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    for(i=n1;i<=n2;i++) {
        a=i;
        ans=0;
        l=0;
        b=i;
        while(b>0) {
            b=b/10;
            l++;
        }
        l = l-1;
        for(j=0;a>0;j++) {
            r = a%10;
            ans = ans + r*pow(10,l-j);
            a=a/10;
        }
        if(ans == i) {
            cout<<i<<" is a palindrome"<<endl;
            k++;
        }
    }

    if (k == 0) {
        cout<<"Palindromic numbers do not exist in the interval"<<endl;
    }
    return 0;
}