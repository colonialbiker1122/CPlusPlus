//Write a class to represent a vector( series of float values) with following member functions : a. Create a vector b. Modify th value of a given element c. Multiply by a scalar value d. Display vector e. Add 2 vectors and display resultant vector
#include<iostream>
using namespace std;

class vector{
    private:
        float a,b,c;
    public:
        void create();
        void modify();
        void multiply();
        void display();
        friend vector add(vector ,vector);
};

void vector :: create() {
    cout<<"Vector exists in the form r = ai + bj + ck\n";
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
}

void vector :: modify() {
    cout<<"Vector exists in the form r = ai + bj + ck\n";
    cout<<"Enter values of updated vector :\n";
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
}

void vector :: multiply() {
    float m;
    cout<<"Enter a scalar value : ";
    cin>>m;
    a = m*a;
    b = m*b;
    c = m*c;
}

void vector :: display () {
    cout<<"Vector is : r = "<<a<<"i + "<<b<<"j + "<<c<<"k\n";
}

vector add(vector p1, vector p2) {
    vector p3;
    p3.a = p1.a + p2.a;
    p3.b = p1.b + p2.b;
    p3.c = p1.c + p2.c;
    return p3;
}

int main() {
    vector a1,a2,a3;
    a1.create();
    a1.display();
    a1.modify();
    cout<<"After modification, updated vector :\n";
    a1.display();
    a1.multiply();
    cout<<"After multiplication with scalar :\n";
    a1.display();
    cout<<"Enter new vector details :\n";
    a2.create();
    a3 = add(a1,a2);
    cout<<"After addition :\n";
    a3.display();
    return 0;
}