//Swapping private data of 2 different classes using friend function
#include<iostream>
using namespace std;

class c2;

class c1{
    private:
        int a1;
    public:
        c1() {
            cout<<"Enter value : ";
            cin>>a1;
        }
        void put() {
            cout<<"Value is : "<<a1<<endl;
        }
        friend void swap(c1 &, c2 &);
};

class c2{
    private:
        int a2;
    public:
        c2() {
            cout<<"Enter value : ";
            cin>>a2;
        }
        void put() {
            cout<<"Value is : "<<a2<<endl;
        }
        friend void swap(c1 &, c2 &);
};

void swap(c1 &p1, c2 &p2) {
    int temp;
    temp = p1.a1;
    p1.a1 = p2.a2;
    p2.a2 = temp;
}

int main() {
    c1 o1;
    c2 o2;
    swap(o1,o2);
    o1.put();
    o2.put();
    return 0;
}