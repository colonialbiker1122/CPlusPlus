//STORE AND DISPLAY INFORMATION USING STRUCTURE
#include<iostream>
using namespace std;

struct mydata{
    char name[8];
    int roll;
    float marks;
}   a[2];

int main() {
    //struct mydata mystud;
    int i;
    cout<<"Enter details of students : "<<endl;

    for(i=0;i<2;i++) {
        cout<<"Enter name of student : ";
        cin>>a[i].name;
        cout<<"Enter Roll number of student: ";
        cin>>a[i].roll;
        cout<<"Enter Marks of student : ";
        cin>>a[i].marks;
        cout<<endl;
    }

    for(i=0;i<2;i++) {
        cout<<"Name of student : "<<a[i].name<<endl;
        cout<<"Roll number of student : "<<a[i].roll<<endl;
        cout<<"Marks of student : "<<a[i].marks<<endl<<endl;
    }

    return 0;
}