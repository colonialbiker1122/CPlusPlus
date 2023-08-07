//SWAP NUMBERS IN CYCLICAL ORDER USING DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;

int main() {
    int n,i,t;
    int *ptr = NULL;

    cout<<"Enter number of elements : ";
    cin>>n;

    ptr = (int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++) {
        cout<<"Enter value of element a["<<i<<"] : ";
        cin>>ptr[i];
    }

    t = ptr[0];
    for(i=0;i<n-1;i++) {
        ptr[i] = ptr[i+1];
    }
    ptr[n-1] = t;

    cout<<"After swapping in cyclical order : "<<endl;
    for(i=0;i<n;i++) {
        cout<<"Value of a["<<i<<"] is : "<<ptr[i]<<endl;
    }

    return 0;
}