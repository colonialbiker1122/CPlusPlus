//Write a Program to evaluate value of SUM = 1 + (1/2)^2 + (1/3)^2 + (1/4)^2 + (1/5)^2...
//not working....
#include<iostream>
#include<cmath>
using namespace std;

float mysum(int np) {
    float ans=0,d;
    int i=1;
    do{
        d = i*i;
        ans = ans + 1/d;
        i++;
    } while(i <= np);
    return ans;
}

int main() {
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    cout<<"Sum of pattern upto "<<n<<" terms is : "<<mysum(n)<<endl;
    return 0;
}