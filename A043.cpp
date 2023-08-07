//CONVERT TEMPERATURE FROM CELSIUS TO FARENHEIT
#include<iostream>
using namespace std;

int main() {
    float c;
    cout<<"Enter temperature in celsius : ";
    cin>>c;
    cout<<"Temperature in Farenheit is : "<<((9*c)/5) + 32<<endl;
    return 0;
}