//new and delete operators for objects
#include<iostream>
using namespace std;

class student{
    private:
        int age;
    public:
        void get() {
            cout<<"Enter age of student : ";
            cin>>age;
        }
        void display() {
            cout<<"Age of student is : "<<age<<endl;
        }
};

int main() {
    int i,n;
    cout<<"Enter number of students : ";
    cin>>n;
    student* ptr;
    ptr = new student[n];
    
    for (i=0;i<n;i++) {
        cout<<"Student "<<i+1<<" : "<<endl;
        ptr[i].get();
    }

    for (i=0;i<n;i++) {
        ptr[i].display();
    }

    delete[] ptr;
    return 0;
}