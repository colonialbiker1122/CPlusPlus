//Create a class named Grandparent. Create 2 classes Parent1 and Parent2 both derived from Grandparent class. Create a class named child which is derived from Parent1 and Parent2. Use Virtual Base Classes accordingly
#include<iostream>
using namespace std;

class grandparent{
  public:
    void display() {
        cout<<"I am Grandparent Class\n";
    }
};

class parent1 : virtual public grandparent {
  public:
    void display() {
        cout<<"I am Parent1 Class\n";
    }
};

class parent2 : virtual public grandparent {
  public:
    void display() {
        cout<<"I am Parent2 Class\n";
    }
};

class child: public parent1, public parent2 {
  public:
    void display() {
        cout<<"I am Child Class\n";
    }
};

int main() {
    child c1;
    c1.display();
    c1.parent1 :: display();
    c1.parent2 :: display();
    c1.grandparent :: display();
    return 0;
}