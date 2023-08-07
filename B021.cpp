//Create a class sample having two data members a and b having integer data types, and having function set_val(), a non-member function sum() has to print the sum of a and b.
#include<iostream>
using namespace std;

class sample{
    int a,b;
  public:
    void set_val(int a, int b) {
        this->a = a;
        this->b = b;
    }

    friend void sum(sample);
};

void sum(sample s1) {
    cout<<"Sum of a and b is: "<<s1.a+s1.b<<endl;
}

int main() {
    sample o1;
    int i1, i2;
    cout<<"Enter 2 intergers separated by a space: ";
    cin>>i1>>i2;
    o1.set_val(i1,i2);
    sum(o1);
    return 0;
}