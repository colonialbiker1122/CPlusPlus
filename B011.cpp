//Create 2 classes named car and truck with data members as speed, create friend function void speed to tell which has greater speed
#include<iostream>
using namespace std;

class car;
class truck{
    private:
        int s;
    public:
        truck() {
            cout<<"Enter speed of truck : ";
            cin>>s;
        }
        friend void speed(car a1, truck a2);
};

class car{
    private:
        int s;
    public:
        car() {
            cout<<"Enter speed of car : ";
            cin>>s;
        }
        friend void speed(car a1, truck a2);
};

void speed(car a1, truck a2) {
            if(a1.s > a2.s) {
                cout<<"Car is faster than truck"<<endl;
            } else if (a1.s < a2.s) {
                cout<<"Truck is faster than car"<<endl;
            } else {
                cout<<"Both car and truck have same speed"<<endl;
            }
        }

int main() {
    truck t1;
    car c1;
    speed(c1, t1);
    return 0;
}