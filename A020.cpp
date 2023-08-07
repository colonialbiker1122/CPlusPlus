//REVERSE A NUMBER
#include<iostream>
using namespace std;

int main() {
    int a,ans=0,r;
    cout<<"Enter a number : ";
    cin>>a;

    while(a>0){
        r = a%10;
        ans = ans*10 + r;
        a = a/10;
    }

    cout<<"Reverse of the number is : "<<ans<<endl;
    return 0;
}