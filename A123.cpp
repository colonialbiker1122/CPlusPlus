//Create an triangle pattern of the value of pi using width and precision operators
#include<iostream>
using namespace std;

int main() {
    double pi;
    pi = 22.0 / 7.0;
    for(int i=1; i<=7; i++) {
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }
    return 0;
}