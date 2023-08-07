//Write a program to print a table of values of the function y = e^-x for x varying from 0 to 10in steps of 0.1
//Check output in full horizontal screen !!
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    int i;
    float j, ans, e=2.7183;
    cout<<"x"<<"  ";
    for(i=0;i<10;i++) {
        cout<<setw(11)<<i*0.1<<"\t";
    }
    cout<<endl;

    for(i=0;i<10;i++) {
        cout<<i<<"  ";
        for(j=0;j<1;j=j+0.1) {
            cout<<setw(11)<<exp(-1*(i+j))<<"\t";
        }
        cout<<endl;
    }

    return 0;
}