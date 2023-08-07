//Create a class named space with 3 integer type of data members. Overload the unary minus operator such that all the 3 data members become NEGATIVE using FRIEND FUNCTION
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
    friend space operator - (space );
};

space operator- (space ps) {
    space n1;
    n1.a = -ps.a;
    n1.b = -ps.b;
    n1.c = -ps.c;
    return n1;
}

int main() {
    int a,b,c;
    cout<<"Enter 3 integers separated by a space : ";
    cin>>a>>b>>c;
    space o1, o2;
    o1.getdata(a,b,c);
    cout<<"Data which you have entered :\n";
    o1.putdata();
    o2 = -o1;
    cout<<"Data after negation using user-defined Uniary minus operator :\n";
    o2.putdata();
    return 0;
}