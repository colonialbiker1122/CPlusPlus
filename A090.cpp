//Write a Program to calculate value of cos(x) using expansion
#include<iostream>
#include<cmath>
using namespace std;

int myfact(int ip){
    if( ip == 0) {
        return 1;
    } else {
        return ip*myfact(ip-1);
    }
}

float mycos(float ap) {
    if (ap == 90) {
        return 0;
    }

    float num, deno, ans=0;
    int i=0;
    ap = ap * 3.141592/180;
    do{
        deno = myfact(2*i);
        num = pow(-1,i)*pow(ap, 2*i);
        ans = ans + num/deno;
        i++;
    } while(i<=5);
    return ans;
}

int main() {
    float a;
    cout<<"Enter value of angle in degrees : ";
    cin>>a;
    cout<<"Cosine of angle is : "<<mycos(a)<<endl;
    return 0;
}