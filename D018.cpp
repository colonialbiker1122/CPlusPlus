//Copy 2 objects using copy constructor syntax and assingment operator syntax
#include<iostream>
using namespace std;

class myclass{
    private:
        int id;
    public:
        myclass() : id(5){}

        myclass(myclass &a1){
            id = a1.id;
        }

        void display() {
            cout<<"Value of id is : "<<id<<endl;
        }
};

int main() {
    myclass a1;
    a1.display();
    myclass a2(a1);//A new object a2 is created
    myclass a3;
    a3 = a1;//A new object IS NOT Created. Adress of a1 is stored in a3
    a2.display();
    a3.display();
    return 0;
}