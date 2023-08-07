//Use friend function to add data object of 2 different classes
#include<iostream>
using namespace std;

class a2;

class a1{
    private:
        int data1;
    public:
        void get() {
            cout<<"Enter data of object of class a1 : ";
            cin>>data1;
        }
        friend int add(a1, a2);
};

class a2{
    private:
        int data2;
    public:
        void get() {
            cout<<"Enter data of object of class a2 : ";
            cin>>data2;
        }
        friend int add(a1, a2);
};

int add(a1 p1, a2 p2) {
    return p1.data1 + p2.data2;
}

int main() {
    a1 o1;
    a2 o2;
    o1.get();
    o2.get();
    cout<<"Addition of both data members is : "<<add(o1, o2)<<endl;
    return 0;
}