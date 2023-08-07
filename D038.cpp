//Overloaded Constructors: Create a class named complex with one contructor for initializing 1 argument and another constructor for initializing 2 arguments. Use friend function to find sum of 2 complex numbers
#include<iostream>
using namespace std;

class complex{
    private:
        float x,y;
    public:
        complex();
        complex(float);
        complex(float, float);
        friend complex sum(complex ,complex);
        void display();
};

complex :: complex() {}

complex :: complex(float p) {
    x=y=p;
}

complex :: complex(float xp, float yp) {
    x = xp;
    y = yp;
}

void complex :: display() {
    cout<<"x: "<<x<<endl
        <<"y: "<<y<<endl;
}

complex sum(complex p1, complex p2) {
    complex ans;
    ans.x = p1.x + p2.x;
    ans.y = p1.y + p2.y;
    return ans;
}

int main() {
    complex a1, a2(4), a3(2,3);
    a1 = sum(a2,a3);
    a1.display();
    return 0;
}