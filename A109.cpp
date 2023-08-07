//Use a pointer and a pointer-to-pointer to increment the value of an integer
#include<iostream>
using namespace std;

int main() {
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    a = 10;
    cout<<"Value of a is: "<<a<<endl;
    (*ptr1)++;
    cout<<"Value of a is: "<<*ptr1<<endl;
    (**ptr2)++;
    cout<<"Value of a is: "<<**ptr2<<endl;
    return 0;
}