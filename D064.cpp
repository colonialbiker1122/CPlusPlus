//Create class M and N with one private data member each. Create a derived class P which is derived with multiple base classes M and N. Display all Data members of the derived class
#include<iostream>
using namespace std;

class M{
  protected:
    int m;
  public:
    int getm() {
        m = 10;
        return m;
    }
};

class N{
  protected:
    int n;
  public:
    int getn() {
        n = 20;
        return n;
    }
};

class P : public M, public N {
  protected:
    int p;
  public:
    P() {
        p = 30;
    }
    void display() {
        cout<<"Value of m is: "<<getm()<<endl;
        cout<<"Value of n is: "<<getn()<<endl;
        cout<<"Value of p is: "<<p<<endl;
    }
};

int main() {
    P p1;
    p1.display();
    return 0;
}