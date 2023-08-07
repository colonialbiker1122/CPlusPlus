//overload the Point-to-member operator ->
#include<iostream>
using namespace std;

class test{
  public:
    int a;
    test(int ap) {
        a = ap;
    }
    test* operator-> (void) {
        return this;
    }
};

int main() {
    test t1(4);
    test *ptr = &t1;
    cout<<t1.a<<endl;
    cout<<ptr->a<<endl;
    cout<<t1->a<<endl;
    return 0;
}