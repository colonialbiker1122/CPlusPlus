//Create an array of object dynamically and assign some values using dynamic constructor
#include<iostream>
using namespace std;

class test{
    private:
        int *p;
        int size;
    public:
        test() {
            int i;
            size = 3;
            p = new int[size];
            for(i=0;i<size;i++) {
                p[i] = 10*i;
            }
        }
        void display() {
            for(int i=0;i<size;i++) {
                cout<<p[i]<<endl;
            }
        }
};

int main() {
    int i, n;
    cout<<"Enter number of objects : ";
    cin>>n;
    test *ptr;
    ptr = new test[n];
    for(i=0;i<n;i++) {
        ptr[i].display();
    }
    return 0;
}