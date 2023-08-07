//CALCULATE AVERAGE OF NUMBERS USING ARRAY
#include<iostream>
using namespace std;

int main() {
    int a[20],i,n;
    float ans=0;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<endl;

    for(i=0;i<n;i++) {
        cout<<"Enter value of element a["<<i<<"] : ";
        cin>>a[i];
        ans = ans + a[i];
    }

    ans = ans/n;
    cout<<"Average of all numbers is : "<<ans<<endl;
}