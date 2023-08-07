//Static Class members
#include<iostream>
using namespace std;

class test{
    private:
        static int count;
        int number;
    public:
        void getdata(int a) {
            number = a;
            count++;
        }
        void getcount() {
            cout<<"count : "<<count<<endl;
        }
};

int test :: count; //REQUIRED / COMPULSORY to declare outside the class 

int main() {
    test a1, a2, a3;
    a1.getcount();
    a2.getcount();
    a3.getcount();
    a1.getdata(12);
    a2.getdata(45);
    a3.getdata(78);
    a1.getcount();
    a2.getcount();
    a3.getcount();
    return 0;
}