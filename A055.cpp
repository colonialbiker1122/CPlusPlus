//CALCULATE PROFIT OR LOSS
#include<iostream>
using namespace std;

int main() {
    int c,s,d;
    cout<<"Enter Cost Price : ";
    cin>>c;
    cout<<"Enter Selling Price : ";
    cin>>s;
    if(s>c) {
        cout<<"Profit is : "<<s-c<<endl;
    } else if( c>s) {
        cout<<"Loss is : "<<c-s<<endl;
    } else {
        cout<<"No Profit, No Loss"<<endl;
    }
    return 0;
}