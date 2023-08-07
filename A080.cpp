//Write a Program to calculate value of sinx using expansion
#include<iostream>
#include<cmath>
using namespace std;

int mydeno(int i) {
    if(i == 0) {
        return 1;
    } else {
        return i*mydeno(i-1);
    }
}

float mysin(float & n) {
    float ans=0, deno,num;
    int i=0;
    n = n*3.141592/180;
    do{
        deno = mydeno(2*i+1);
        num = pow(-1,i)*pow(n,2*i+1);
        ans = ans + num/deno;
        i++;
    } while( i<=5 );
    return ans;
}

int main() {
    float r, ans = 0;
    cout<<"Enter value of angle in degree : ";
    cin>>r;
    cout<<"Sine value of the angle is : "<<mysin(r)<<endl;
    return 0;
}