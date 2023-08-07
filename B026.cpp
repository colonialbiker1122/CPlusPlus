//Create a class where using constructor assign size of character array at run-time and copy it to another object and then free the memory of one of the object and display all the values.
#include<iostream>
#include<cstring>
using namespace std;

class test{
    char *ptr;
    int length;
  public:
    test() {
        length = 0;
        ptr = new char[length + 1];
    }
    
    test(char *ap) {
        length = strlen(ap);
        ptr = new char[length + 1];
        strcpy(ptr, ap);
    }

    void display() {
        cout<< ptr <<endl;
    }
};

int main() {
    char a[] = "Sumukh";
    test *ptr;
    ptr = new test(a);
    cout<<"String in First object is:\n";
    ptr->display();

    test ptr2(*ptr);
    cout<<"After copying, String in second object is:\n";
    ptr2.display();

    delete ptr;
    cout<<"After deleting First object...\n";
    cout<<"String in second object is:\n";
    ptr2.display();
    return 0;
}