//WAP to demonstrate the use of static function to count the number of times a function is called
#include<iostream>
using namespace std;

void display() {
    static int count=0;
    count++;
    cout<<"Function display() is called "<<count<<" times\n";
}

int main() {
    display();
    display();
    display();
    return 0;
}