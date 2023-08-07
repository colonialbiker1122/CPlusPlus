//Define a classc alled point that stores the x and y coordinates. Class must use parameterized constructor for initializing the class objects
#include<iostream>
using namespace std;

class point{
    private:
        int x;
        int y;
    public:
        point(int ,int );
        void display();
};

point :: point(int xp, int yp) {
    x=xp;
    y= yp;
}

void point :: display() {
    cout<<"x co-ordinate : "<<x<<endl
        <<"y co-ordinate : "<<y<<endl;
}

int main() {
    point a(2,3);
    a.display();
    return 0;
}