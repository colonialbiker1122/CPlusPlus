//DISPLAY ARMSTRONG NUMBER BETWEEN 2 INTERVALS
#include<iostream>
using namespace std;

int main() {
    int i,a,b,r,add,n1,n2,j=0;
    cout<<"Enter the interval with first number lower than the second"<<endl;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    for(i=n1;i<=n2;i++) {
        add=0;
        b=i;
        a=i;
        while(a>0) {
            r = a%10;
            add = add + r*r*r;
            a = a/10;
        }
        if(b == add) {
            cout<<add<<" is an Armstrong number"<<endl;
            j++;
        }
    }
    
    if(j == 0) {
        cout<<"There does not exist any Armstrong number in the interval"<<endl;
    }
    return 0;
}