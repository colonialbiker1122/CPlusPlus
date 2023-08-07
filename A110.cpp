//Increment the value of a pointer and a pointer-to-pointer to an integer
#include<iostream>
using namespace std;

int main() {
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout<<"Address of a is: "<<ptr1<<endl;
    cout<<"Address of ptr1 is: "<<ptr2<<endl;
    ptr1 += 2;
    cout<<"Address of a is: "<<ptr1<<endl;
    ptr2 += 2;
    cout<<"Address of a is: "<<ptr2<<endl;
    return 0;
}