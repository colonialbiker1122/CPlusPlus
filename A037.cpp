//FIND NUMBER OF DIGITS IN AN INTEGER
#include<iostream>
using namespace std;

int main() {
    int a,b=0;
    cout<<"Enter a number : ";
    cin>>a;

    while(a>0) {
        a=a/10;
        b++;
    }

    cout<<"Number of digits are : "<<b<<endl;
    return 0;   
}