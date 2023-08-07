//Write a program to take input of faculty details (ID, Name, Post, Qualification, Address) and display it
//INcomplete
#include<iostream>
using namespace std;

class details{
    private:
        int id;
        string name;
        string post;
        string qualification;
        string address;
    public:
        void get() {
            cout<<"Enter ID : ";
            cin>>id;
            fflush(stdin);
            cout<<"Enter Name : ";
            getline(cin, name);
            cout<<"Enter Post : ";
            getline(cin, post);
            cout<<"Enter Qualification : ";
            getline(cin, qualification);
            cout<<"Enter Address : ";
            getline(cin, address);
        }
        void put() {
            cout<<"\nID : "<<id<<endl
                <<"Name : "<<name<<endl
                <<"Post : "<<post<<endl
                <<"Qualification : "<<qualification<<endl
                <<"Addres : "<<address<<endl;
        }
};

int main() {
    int i,n;
    cout<<"Enter number of faculties : ";
    cin>>n;
    details *ptr;
    ptr = new details[n];
    for(i=0;i<n;i++) {
        ptr[i].get();
    }

    for(i=0;i<n;i++) {
        ptr[i].put();
    }
    delete[] ptr;
    return 0;
}