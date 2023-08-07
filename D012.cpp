//Scan the number of students and their overall percentage by creating a class named stdgrd using Dynamic Memory Allocation
#include<iostream>
using namespace std;

class stdgrd{
    private:
        float percent;
    public:
        void get() {
            cout<<"Enter overall percentage of student : ";
            cin>>percent;
        }
        void display() {
            cout<<"Overall percentage is : "<<percent<<endl;
        }
};

int main() {
    int n,i;
    cout<<"Enter number of students : ";
    cin>>n;
    stdgrd *ptr;
    ptr = new stdgrd[n];

    for(i=0;i<n;i++) {
        cout<<"Student "<<i+1<<" : ";
        ptr[i].get();
    }

    for(i=0;i<n;i++) {
        cout<<"Overall percentage of Student "<<i+1<<" is : ";
        ptr[i].display();
    }

    delete[] ptr;
    return 0;
}