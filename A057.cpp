//PRINT TOTAL NUMBER OF DAYS IN A MONTH USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter month number : ";
    cin>>a;

    switch(a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"Number of days is : 31"<<endl;
        break;

        case 2:
        cout<<"Number of days is : 28"<<endl;
        break;

        default:
        cout<<"Number of days is : 30"<<endl;
        break;

    }
    return 0;
}
