//Use of manipulators
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int basic=20, allowance=30, total=50;
    float a1=56.234692;
    cout<<setw(10)<<"Basic"<<setw(10)<<basic<<endl
        <<setw(10)<<"Allowance"<<setw(10)<<allowance<<endl
        <<setw(10)<<"Total"<<setw(10)<<total<<endl;
    cout<<"Floating point number is : "<<a1<<endl;
    cout<<"Floating point number precise to 6 significant digits is : "<<setprecision(6)<<a1<<endl;
    return 0;
}