//Write a program which will ask for temperature in farenheit and display in celsius using a class named temp and other member functions.
#include<iostream>
using namespace std;

class temp{
    private:
        float far;
    public:
        void get()   {
            cout<<"Enter temerature in Farenheit : ";
            cin>>far;
        }
        void display() {
            cout<<"Temperature in celsius is : "<<(far-32)*5/9<<endl;
        }
};

int main() {
    temp a1;
    a1.get();
    a1.display();
    return 0;
}