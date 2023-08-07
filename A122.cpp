//Precision setting with precision()
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    cout.precision(5);
    cout<<"Precision set to 3 digits\n";
    cout.width(5);
    cout<<"Value";
    cout.width(15);
    cout<<"Square Root"<<endl;
    for(int i=1; i <=5; i++) {
        cout.width(5);
        cout<<i;
        cout.width(15);
        cout<<sqrt(i)<<endl;
    }
    cout.precision(0);
    cout<<"Square root of 10 is: "<<sqrt(10)<<endl;
    return 0;
}