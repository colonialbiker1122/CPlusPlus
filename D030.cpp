//Use friend function to find mean of 2 numbers. Both numbers are part of the same class.
#include<iostream>
using namespace std;

class avg{
    private:
        int a;
        int b;
    public:
        void getdata();
        friend void mean(avg);
};

void avg :: getdata() {
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
}

void mean(avg p1) {
    cout<<"Mean of 2 numbers is : "<<(p1.a+p1.b)/2<<endl;
}

int main() {
    avg a1;
    a1.getdata();
    mean(a1);
    return 0;
}