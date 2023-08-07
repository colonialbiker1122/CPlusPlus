//SCAN MONTH NUMBER AND DISPLAY NUMBER OF DAYS IN THAT MONTH
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter Month number : ";
    cin>>a;
    if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
        cout<<"Number of days in the month is : 31"<<endl;
    } else if (a == 2) {
        cout<<"Number of days in the month is : 28"<<endl;
    } else {
        cout<<"Number of days in the month is : 30"<<endl;
    }
    return 0;
}