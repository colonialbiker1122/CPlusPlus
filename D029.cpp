//Objects as arguments: create a class named time with data members hours and minutes and 3 member functions gettime(), puttime() and sum()
#include<iostream>
using namespace std;

class time{
    private:
        int hours;
        int minutes;
    public:
        void gettime();
        void puttime();
        void sum(time , time );
};

void time :: gettime() {
    cout<<"Enter hours : ";
    cin>>hours;
    cout<<"Enter minutes : ";
    cin>>minutes;
}

void time :: puttime() {
    cout<<"Hours : "<<hours<<endl;
    cout<<"Minutes : "<<minutes<<endl;
}

void time :: sum(time t1, time t2) {
    minutes = t1. minutes + t2.minutes;
    hours = t1.hours + t2.hours;
    while(minutes >= 60) {
        minutes = minutes - 60;
        hours++;
    }
}

int main() {
    time a1,a2,a3;
    a1.gettime();
    a2.gettime();
    a3.sum(a1,a2);
    a3.puttime();
    return 0;
}