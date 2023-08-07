//Using template, create a program to accept any data type and display using a function
#include<iostream>
using namespace std;
template <class t>

void display(t pt) {
    cout<<"Display: "<<pt<<endl;
}

int main() {
    display(12);
    display(35.2);
    display(3.23658963);
    display('r');
    display("srdgh");
    display(true);
    display(false);
    return 0;
}