//CHECK WHETHER A NUMBER IS POSITIVE NEGATIVE OR ZERO USING SWITCH CASE
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a number : ";
    cin>>a;
    switch(a>0) {
        case 0:
            switch(a == 0) {
                case 1:
                cout<<"Number is neither positive nor negative"<<endl;
                break;

                case 0:
                cout<<"Number is NEGATIVE"<<endl;
                break;
            }
        break;
        
        case 1:
        cout<<"Number is POSITIVE"<<endl;
        break;
    }
    return 0;
}