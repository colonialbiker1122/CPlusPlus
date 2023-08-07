//CALCUALTE POWER OF A NUMBER
#include<iostream>
using namespace std;

int main() {
    int b,e,a=1,i;
    cout<<"Enter base : ";
    cin>>b;
    cout<<"Enter exponenet : ";
    cin>>e;

    for(i=0;i<e;i++) {
        a = a*b;
    }

    cout<<"Result is : "<<a<<endl;
    return 0;
}