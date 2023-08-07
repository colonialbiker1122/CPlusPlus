//Pointers to Function example
#include<iostream>
using namespace std;

typedef void (*functionptr) (int, int);

void add(int i, int j) {
    cout<<"Addition of both numbers is: "<<i+j<<endl;
}

void sub(int i, int j) {
    cout<<"Subtraction of both numbers is: "<<i-j<<endl;
}

int main() {
    functionptr ptr;
    ptr = &add;
    ptr(1,2);
    return 0;
}