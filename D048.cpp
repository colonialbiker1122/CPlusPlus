//Use dynamic constructor to store a word and display it
#include<iostream>
#include<cstring>
using namespace std;

class test{
    private:
        const char *p; //usse const keyword... Else error is displayed...
    public:
        test() {
            p = new char[7];
            p = "Sumukh";
        }
        void display(void) {
            cout<<p<<endl;
        }
};

int main() {
    test a1;
    a1.display();
    return 0;
}