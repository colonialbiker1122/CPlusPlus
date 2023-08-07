//Ambiguity Resolution in Inheritance - 1
#include<iostream>
using namespace std;

class M{
  protected:
    int m;
  public:
    M() : m(10) {}
    void display() {
        cout<<m<<endl;
    }
};

class N{
  protected:
    int n;
  public:
    N() : n(20) {}
    void display() {
        cout<<n<<endl;
    }
};

class P : public N, public M{
  protected:
    int p;
  public:
    P(int pp) {
        p = pp;
    }
    P() : p(30) {}
    void display() {
        cout<<p<<endl;
    }
};

int main() {
    P p1(15), p2;
    p1.display();
    p1.M :: display();
    p1.N :: display();

    p2.display();
    p2.M :: display();
    p2.N :: display();
    return 0;
}