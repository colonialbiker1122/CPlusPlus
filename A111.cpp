//Arithmetic operations on Pointers
#include<iostream>
using namespace std;

int main() {
    int a[] = {150, 151, 152, 153, 154, 155};
    int *ptr;
    int i;
    for(i=0; i<6; i++) {
        cout<<"a["<<i<<"]: "<<a[i]<<endl;
    }
    ptr = &a[0];
    cout<<"Value pointed by ptr: "<<*ptr<<endl;
    ptr++;
    cout<<"After ptr++, Value pointed by ptr: "<<*ptr<<endl;
    (ptr)--;
    cout<<"After ptr--, Value pointed by ptr: "<<*ptr<<endl;
    ptr += 2;
    cout<<"After ptr+2, Value pointed by ptr: "<<*ptr<<endl;
    ptr -= 1;
    cout<<"After ptr-1, Value pointed by ptr: "<<*ptr<<endl;
    ptr += 3;
    cout<<"After ptr+3, Value pointed by ptr: "<<*ptr<<endl;
    ptr -= 2;
    cout<<"After ptr-2, Value pointed by ptr: "<<*ptr<<endl;

    return 0;
}