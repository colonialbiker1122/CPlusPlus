//CONVERT A DECIMAL INTO A BINARY NUMBER
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int r,a,i=0;
    long long int ans=0;
    cout<<"Enter a number : ";
    cin>>a;

    while(a>0) {
        r = a%2;
        ans = ans + r*pow(10,i);
        a=a/2;
        i++; 
    }
    
    cout<<"Binary of the number is : "<<ans<<endl;
    return 0;   
}