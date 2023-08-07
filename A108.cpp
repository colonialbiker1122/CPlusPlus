//Example of Pointer and pointer-to-pointer
#include<iostream>
using namespace std;

int main() {
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    a = 10;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a(&a): "<<&a<<endl;
    
    cout<<"Value of a(*ptr1): "<<*ptr1<<endl;
    cout<<"Address of a(ptr1): "<<ptr1<<endl;

    cout<<"Value of a(**ptr2): "<<**ptr2<<endl;
    cout<<"Address of a(*ptr2): "<<*ptr2<<endl;
    cout<<"Value of ptr1(*ptr2): "<<*ptr2<<endl;
    cout<<"Value of ptr2: "<<ptr2<<endl;
    return 0;
}