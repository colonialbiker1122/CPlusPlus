//Write a program to perform string copy operation by overloading == operator and using dynamic memory allocation (Without friend function and with friend function).
#include<iostream>
#include<cstring>
using namespace std;

class String{
  private:
    int len;
    char *ptr;
  public:
    void setdata(char *in) {
        len = strlen(in);
        ptr = new char[len];
        strcpy(ptr, in);
    }

    void display() {
        cout<<ptr<<endl;
    }

    friend void operator==(String &, String &);
};

void operator==(String & p1, String & p2) {
    p1.len = p2.len;
    p1.ptr = new char[p1.len];
    strcpy(p1.ptr, p2.ptr);
}


int main() {
    String s1, s2;
    cout<<"Using Friend Function...\n";
    s1.setdata("Sumukh");
    cout<<"Original String:\n";
    s1.display();
    cout<<"Copying String...\n";
    s2 == s1;
    cout<<"Copied String...\n";
    s2.display();

    return 0;
}