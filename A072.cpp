//SCAN NUMBER OF STUDENTS AND THEIR GPA USING DYNAMIC MEMORY ALLOCATION
#include<iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"Enter number of students : ";
    cin>>n;

    float *ptr;
    ptr = new float[n];

    for (i=0;i<n;i++) {
        cout<<"Enter GPA of Student "<<i+1<<" : ";
        cin>>*(ptr+i);
    }

    for (i=0;i<n;i++) {
        cout<<"GPA of student : "<<i+1<<" is : "<<*(ptr+i)<<endl;
    }

    delete[] ptr;
    return 0;
}