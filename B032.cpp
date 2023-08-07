//Create a class number which will contain an integer data member x, now create class square which will inherit from class number and calculate the square of the number and create another class cube which will calculate and display the cube of the number.
#include<iostream>
using namespace std;

class number{
    int x;
  public:
    int getnumber() {
        return x;
    }

    void setnumber(int x) {
        this->x = x;
    }
};

class square : public number{
    int x2;
  public:
    void calculatesquare() {
        int myx;
        myx = getnumber();
        x2 = myx * myx;
    }

    void display() {
        cout<<x2;
    }
};

class cube : public number{
    int x3;
  public:
    void calculatecube() {
        x3 = getnumber() * getnumber() * getnumber();
    }

    void display() {
        cout<<x3;
    }
};

int main() {
    square s1;
    int v1;
    cout<<"Enter a number: ";
    cin>>v1;
    s1.setnumber(v1);
    s1.calculatesquare();
    cout<<"Square of number is: ";
    s1.display();
    cout<<endl;

    cout<<"Enter a number: ";
    cin>>v1;
    cube c1;
    c1.setnumber(v1);
    c1.calculatecube();
    cout<<"Cube of number is: ";
    c1.display();
    cout<<endl;
    
    return 0;
}