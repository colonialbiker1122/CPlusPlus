//WAP to print the smallest possible number that is divisible by all tthe numbers from M to N
#include<iostream>
using namespace std;

int main() {
    int m,n, ans=1, flag, count, finalans, temp;
    cout<<"Enter first number: ";
    cin>>m;
    cout<<"Enter second number: ";
    cin>>n;
    for (int i=m; i<=n; i++) {
        ans = ans * i;
    }

    flag = ans;
    finalans = ans;

    for (int i=flag; i>=n; i--) {
        
        count = 0;
        for (int j=m; j<=n; j++) {
            if ( i%j == 0 ) {
                count++;
            }
        }

        if ( count == n-m+1) {
            finalans = i;
        }

    }
    cout<<"Final answer : "<<finalans;
}