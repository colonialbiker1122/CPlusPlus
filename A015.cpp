//GENERATE A MULTIPLICATION TABLE
#include<iostream>
using namespace std;

int main() {
    int a,i;
    cout<<"Enter a number : ";
    cin>>a;
    for(i=1;i<=10;i++) {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}