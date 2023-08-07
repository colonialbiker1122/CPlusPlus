//Memory Allocation to an object using destructor
#include<iostream>
using namespace std;

class test{
    int *a;
    public:
        test(int size) {
            a = new int[size];
            cout<<"\nConstructor message: Integer array of size "<<size<<" created...";
        }
        ~test() {
            delete a;
            cout<<"\nDestructor message: Freed memory allocated for integer array...";
        }
};

int main() {
    int a;
    cout<<"Enter size of array : ";
    cin>>a;
    cout<<"\nCreating an object...";
    test T(a);
    cout<<"\nProgram is ending...";
    return 0;
}