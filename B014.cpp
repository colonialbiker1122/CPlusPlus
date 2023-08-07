//Create a class employee having two data members char name & float age, this class is also having function void getdata() & void putdata() input and display the details of 5 different employees.
#include<iostream>
using namespace std;

class employee{
    private:
        char name[16];
        float age;
    public:
        void getdata() {
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter age : ";
            cin>>age;
        }
        void putdata() {
            cout<<"Name of employee : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

int main() {
    employee a1[5];
    int i;
    for(i=0;i<5;i++) {
        a1[i].getdata();
    }
    cout<<"Display of all data : "<<endl;
    for(i=0;i<5;i++) {
        a1[i].putdata();
    }
    return 0;
}