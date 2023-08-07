//Write a function swap() to swap the values of different data types from only one function definition.
#include<iostream>
using namespace std;
template<class t1>

void swap(t1 ob1, t1 ob2) {
    t1 temp;
    cout<<"Before Swapping:\n";
    cout<<"First value: "<<ob1<<endl;
    cout<<"Second value: "<<ob2<<endl;

    temp = ob1;
    ob1 = ob2;
    ob2 = temp;

    cout<<"After swapping:\n";
    cout<<"First value: "<<ob1<<endl;
    cout<<"Second value: "<<ob2<<endl;
}

int main() {
    swap(10, 20);
    swap('a','b');
    return 0;
}