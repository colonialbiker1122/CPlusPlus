//VOTING ELIGIBILITY CHECKER
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter your age : ";
    cin>>a;
    if( a >= 18 ) {
        cout<<"You are eligible for Voting"<<endl;
    } else {
        cout<<"You are NOT Eligible for voting"<<endl;
    }
    return 0;
}