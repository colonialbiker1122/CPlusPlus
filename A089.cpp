//DISPLAY FIBONACII SERIES - 2
#include<iostream>
using namespace std;

int main() {
    int a=0,b=1,c,n;
    cout<<"Enter an integer : ";
    cin>>n;
    cout<<a<<"\t";
    do{
        c=a+b;
        a=b;
        b=c;
        cout<<a<<"\t";
    }while(c<=n);

    return 0;
}