//CONVERT BINARY NUMBER TO DECIMAL
//!!!!! NO ERROR IN OUTPUT !!!!!!
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int b,d,ans=0,r,i=0;
    cout<<"Enter a binary number : ";
    cin>>b;

    while(b>0) {
        r = b%10;
        if(r==0 || r==1) {
        ans = ans + r*pow(2,i);
        b = b/10;
        i++; 
        } else {
            cout<<"Number is not binary number";
            exit(0);
        }
    }

    cout<<"Decimal of the binary number is : "<<ans<<endl;

    return 0;
}