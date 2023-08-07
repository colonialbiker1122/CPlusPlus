//DISPLAY PRIME NUMBERS BETWEEN 2 INTERVALS
#include<iostream>
using namespace std;

int main() {
    int a,n1,n2,k=0,i,j,c=0;
    cout<<"Enter interval with lower number first : "<<endl;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    for(i=n1;i<=n2;i++) {
        a=i;
        c=0;
        for(j=2;j<a;j++) {
            if(a%j == 0) {
                c++;
            }
        }
        if( c == 0) {
            cout<<i<<" is a prime number"<<endl;
            k++;
        }
    }
    if(k == 0) {
        cout<<"No Prime numbers exist in the interval"<<endl;
    }
    return 0;
}