//SCAN VLAUES OF AN ARRAY AND DISPLAY USING DYNAMIC MEMORY ALLOCATION
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

    for(i=0;i<n;i++) {
        cout<<"Value of a["<<i<<"] is : "<<ptr[i]<<endl;
    }

    return 0;
}