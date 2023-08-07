//Create a class named space with 3 integer type of data members. Overload the unary minus operator such that all the 3 data members become NEGATIVE
#include<iostream>
using namespace std;

class space{
  private:
    int a,b,c;
  public:
    void getdata(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void putdata() {
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
        cout<<"Value of c is : "<<c<<endl;
    }
    void operator - ();
};

void space :: operator- () {
    a = -a;
    b = -b;
    c = -c;
}

int main() {
    int a,b,c;
    cout<<"Enter 3 integers separated by a space : ";
    cin>>a>>b>>c;
    space o1;
    o1.getdata(a,b,c);
    cout<<"Data which you have entered :\n";
    o1.putdata();
    -o1;
    cout<<"Data after negation using user-defined Uniary minus operator :\n";
    o1.putdata();
    return 0;
}