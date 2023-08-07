//CALCULATE SUM OF n NATURAL NUMBERS
#include<iostream>
using namespace std;

int main() {
    int n,i,sum=0;
    cout<<"Enter value of n : ";
    cin>>n;
    for(i=0;i<=n;i++) {
        sum=sum+i;
    }
    cout<<"Sum of first n Natural numbers is : "<<sum<<endl;
    return 0;
}