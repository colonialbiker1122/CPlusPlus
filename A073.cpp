//SCAN NUMBER OF STUDENTS AND THEIR ROLL NUMBERS USING DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;

int main () {
    int i,n;
    cout<<"Enter number of students : ";
    cin>>n;
    int *ptr;
    ptr = new int[n];

    for (i=0;i<n;i++) {
        cout<<"Enter Roll number of student "<<i+1<<" : ";
        cin>>*(ptr+i);
    }

    for (i=0;i<n;i++) {
        cout<<"Roll number of student "<<i+1<<" is : "<<*(ptr+i)<<endl;
    }

    delete[] ptr;
    return 0;
}