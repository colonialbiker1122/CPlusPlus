//DISPLAY FACTORS OF A NUMBER
#include<iostream>
using namespace std;

int main() {
    int a,i;
    cout<<"Enter a number : ";
    cin>>a;

    for(i=1;i<=a;i++) {
        if(a%i == 0) {
            cout<<i<<" is a factor"<<endl;
        }
    }
    return 0;
}