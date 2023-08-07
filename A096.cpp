//Scope resolution operator
#include<iostream>
using namespace std;

int m = 10;

int main() {
    int m = 20;
    {   int k=m;
        int m = 30;
        cout<<"We are in the inner block"<<endl;
        cout<<"Value of k : "<<k<<endl;
        cout<<"Value of m : "<<m<<endl;
        cout<<"Value of ::m : "<<::m<<endl;
    }
    cout<<"We are in outer block"<<endl;
    cout<<"Value of m is : "<<m<<endl;
    cout<<"Value of ::m is : "<<::m<<endl;
    return 0;
}