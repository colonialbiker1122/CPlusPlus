//Using template, create a program to accept any 2 data types and display using a constructor of a class
#include<iostream>
using namespace std;
template <class t1, class t2>

class test{
  public:
    test (t1 p1, t2 p2) {
        cout<<"Display: "<<p1<<"\t"<<p2<<endl;
    }
};

int main() {
    test <int, char> ob1(2, 'A');
    test <char, float> ob2('z', 23.32);
    return 0;
}