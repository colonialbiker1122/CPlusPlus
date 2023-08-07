#include<iostream>
using namespace std;
 
class Base
{
public:
    virtual void display()
    {
        cout << "\nThis is display() method"
                " of Base";
    }
    void show()
    {
        cout << "\nThis is show() method "
               "of Base";
    }
};
 
class Derived : public Base
{
public:
    void display()
    {
        cout << "\nThis is display() method"
               " of derived Class";
    }
};

int main()
{
    Derived dr;
    Base &bs = dr;
    bs.display();
    dr.show();
}
