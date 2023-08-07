//SCAN WEEK NUMBER AND PRINT WEEK DAY
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter Week Number (Week starts from Monday) : ";
    cin>>a;
    switch (a) {
        case 1:
        cout<<"Week Day is Monday"<<endl;
        break;

        case 2:
        cout<<"Week Day is Tuesday"<<endl;
        break;

        case 3:
        cout<<"Week Day is Wednesday"<<endl;
        break;

        case 4:
        cout<<"Week Day is Thursday"<<endl;
        break;

        case 5:
        cout<<"Week Day is Friday"<<endl;
        break;

        case 6:
        cout<<"Week Day is Saturday"<<endl;
        break;

        case 7:
        cout<<"Week Day is Sunday"<<endl;
        break;

        default:
        cout<<"Invalid Input !!"<<endl;
        break;
    }
    return 0;
}