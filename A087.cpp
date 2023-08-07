//Find absolute value of an integer
#include<iostream>
using namespace std;

int myabs(int ap) {
    if(ap >= 0) {
        return ap;
    } else {
        return ap*(-1);
    }
}

int main() {
    int a;
    cout<<"Enter an integer : ";
    cin>>a;
    cout<<"Absolute value of the integer is : "<<myabs(a)<<endl;
    return 0;
}
