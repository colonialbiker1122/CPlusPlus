//Write a program where a destructor is implicitly called by the compiler
#include<iostream>
using namespace std;
int count=0;

class test{
    public:
        test() {
            count++;
            cout<<"\nConstructor message: Object number "<<count<<" created...";
        }
        ~test() {
            cout<<"\nDestructor Message: Object number "<<count<<" destroyed...";
            count--;
        }
};

int main() {
    cout<<"Inside the main block..";
    cout<<"\nCreating first object T1..";
    test T1;
    {
        cout<<"\nInside Block 1...";
        cout<<"\nCreating 2 more objects T2 and T3...";
        test T2, T3;
        cout<<"\nLeaving block 1...";
    }
    cout<<"\nBack inside the main block...";
    return 0;
}