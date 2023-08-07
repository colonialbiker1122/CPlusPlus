//Swap 2 numbers (which may be integer, floating or both) using template within a class using appropriate functions
#include<iostream>
using namespace std;
template <class t1, class t2>

class test{
    t1 a;
    t2 b;
  public:
    test(t1 p1, t2 p2) {
        a = p1;
        b = p2;
    }

    void swap() {
        t1 temp;
        temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout<<"First number: "<<a<<endl;
        cout<<"Second number: "<<b<<endl;
    }
};

int main() {
    test <int, float> ob1(2,3.3076);
    ob1.display();
    ob1.swap();
    ob1.display();
    return 0;
}