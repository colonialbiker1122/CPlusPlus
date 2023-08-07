//Write a program to find out the ones compliment of a binary number. Create a class named binary with a string variable, void read(), void check_binary(), void ones(), void displayones(). check_binary function must be called within ones function
#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
        string b1;
    public:
        void read();
        void check_binary();
        void ones();
        void displayones();
};

void binary::read() {
    cout<<"Enter the binary number : ";
    cin>>b1;
}

void binary::check_binary(){
    int i;
    for(i=0;i<b1.length();i++) {
        if(b1.at(i) != '0' && b1.at(i) != '1') {
            cout<<"Invalid Binary Number"<<endl<<"PROGRAM TERMINATED"<<endl;
            exit(0);
        }
    }
}

void binary::ones() {
    int i;
    check_binary();
    for(i=0;i<b1.length();i++) {
        if(b1.at(i) == '0') {
            b1.at(i) = '1';
        } else {
            b1.at(i) = '0';
        }
    }
}

void binary::displayones() {
    cout<<"Ones compliment of the binary number is : "<<b1<<endl;
}

int main() {
    binary a1;
    a1.read();
    a1.ones();
    a1.displayones();
    return 0;
}