//Concatenate 2 strings using operator overloading
#include<iostream>
#include<string>
using namespace std;

class myconcat{
    private:
        string a1;
    public:
        void get() {
            cout<<"Enter string : ";
            cin>>a1;
        }

        myconcat operator + (myconcat c) {
            myconcat temp;
            temp.a1 = a1.append(c.a1);
            return temp;
        }

        void display() {
            cout<<"Concatenated string is : "<<a1<<endl;
        }
};

int main() {
    myconcat n1,n2,n3;
    n1.get();
    n2.get();
    n3 = n1+n2;
    a = a+b;
    n3.display();
    return 0;
}