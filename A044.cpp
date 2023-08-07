//CONVERT TEMPERATURE FROM FARENHEIT TO CELSIUS
#include<iostream>
using namespace std;

int main() {
    float a;
    cout<<"Enter temperature in farenheit : ";
    cin>>a;
    cout<<"Temperature in celsius is : "<<(a-32)*5/9<<endl;
    return 0;
}