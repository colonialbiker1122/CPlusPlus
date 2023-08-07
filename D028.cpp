//Array of objects : Create a class names employee with 2 private data members i.e name and age with 2 functions getdata() and putdata().
#include<iostream>
using namespace std;

class employee{
    private:
        string name;
        int age;
    public:
        void getdata();
        void putdata();
};

void employee :: getdata() {
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter age : ";
    cin>>age;
}

void employee :: putdata() {
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}

int main() {
    int i, n;
    cout<<"Enter number of employees : ";
    cin>>n;
    employee *ptr;
    ptr = new employee[n];
    for(i=0;i<n;i++) {
        ptr[i].getdata();
    }

    for(i=0;i<n;i++) {
        ptr[i].putdata();
    }

    delete[] ptr;
    return 0;
}