//Ambiguity Resolution in Inheritance - 2
#include<iostream>
using namespace std;

class M{
  public:
    void display() {
        cout<<"Display of Class M\n";
    }
};

class N{
  public:
    void display() {
        cout<<"Display of Class N\n";
    }
};

class P : public M, public N {
  public:
    void display() {
        cout<<"Start: Display of Class P\n";
        M :: display();
        cout<<"End\n";
    }
};

int main() {
    P p1;
    p1.M :: display();
    p1.N :: display();
    p1.display();
    return 0;
}