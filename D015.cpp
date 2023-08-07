//Unary Operator Overloading 
#include<iostream>
using namespace std;

class count{
    private:
        int value;
    public:
        count() : value(5){}

        void operator ++ () {
            ++value;
        }

        void display() {
            cout<<"Value is : "<<value<<endl;
        }
};

int main() {
    count a1;
    int i;
    i = 5;
    ++i;
    cout<<"Value of i : "<<i<<endl;
    a1.display();
    ++a1;
    a1.display();
    return 0;
}