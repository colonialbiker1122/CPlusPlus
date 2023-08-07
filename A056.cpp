//SCAN MARKS OF A STUDENT AND FIND THE GRADE USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter marks of student out of 100 : ";
    cin>>m;
    switch(m/10) {
        case 10:
        case 9:
        cout<<"Your Grade is A"<<endl;
        break;

        case 8:
        cout<<"Your Grade is B"<<endl;
        break;

        case 7:
        cout<<"Your grade is C"<<endl;
        break;

        case 6:
        cout<<"Your grade is D"<<endl;
        break;

        case 5:
        cout<<"Your grade is E"<<endl;
        break;

        case 4:
        cout<<"Your grade is F"<<endl;
        break;

        default:
        cout<<"You have FAILED"<<endl;
        break;
    }

    return 0;
}