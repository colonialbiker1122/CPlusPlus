//WAP to illustrate exception handling for two integers division for Divide by Zero error.
#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter 2 numbers for division (Output: first number / second number): ";
    cin>>a>>b;
    int ans;
    try{
        if(b == 0) {
            throw b;
        }
        ans = a/b;
        cout<<"Answer: "<<ans<<endl;
    } catch (int b) {
        cout<<"Error Detected. Divide by Zero ERROR\n";
    }
    return 0;
}