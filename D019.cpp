//Unary Operator overloading using friend function
#include<iostream>
using namespace std;

class myclass{
    private:
        int id;
    public:
        myclass() : id(10) {}

        friend myclass operator ++ (myclass a);

        void display() {
            cout<<"Value of id is : "<<id<<endl;
        }
};

myclass operator ++ (myclass a) {
    ++a.id;
    return a;
}

int main() {
    myclass a1,a2;
    a2 = ++a1;
    a2.display();
    return 0;
}