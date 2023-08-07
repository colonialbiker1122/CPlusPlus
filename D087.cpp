//Using template, create a program to accept any data type and display using a function within a class
#include<iostream>
using namespace std;
template <class t1>

class test{
  public:
    void display(t1 pt) {
        cout<<"Display: "<<pt<<endl;
    }
};

int main() {
    test <int> ob1;
    test <float> ob2;
    test <char> ob3;
    ob1.display(12);
    ob2.display(35.2);
    ob3.display('Q');
    return 0;
}