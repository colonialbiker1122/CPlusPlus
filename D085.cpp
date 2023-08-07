//Using the concept of pointers, write a function that swaps the private data value of two objects of the same class type
#include<iostream>
using namespace std;

class test{
    int a;
  public:
    test(int ap) {
        a = ap;
    }

    void display() {
        cout<<"a: "<<a<<endl;
    }

    friend void swap (test t1, test t2) {
        int temp;
        temp = t1.a;
        cout<<temp<<endl;
        t1.a = t2.a;
        cout<<t1.a<<endl;
        t2.a = temp;
        cout<<t2.a<<endl; 
    }
};
 

int main() {
    test t1(5), t2(10);
    t1.display();
    t2.display();
    
    swap(t1, t2);

    t1.display();
    t2.display();
    return 0;
}