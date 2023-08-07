//Write a function display() using templates to print the values of integer, character, float and string data types with single definition of function.
#include<iostream>
using namespace std;
template <class t1>

void display(t1 ob) {
    cout<<ob<<endl;
}

int main() {
    display(20);
    display('A');
    display(65.235890);
    display("Sumukh");
    return 0;
}S