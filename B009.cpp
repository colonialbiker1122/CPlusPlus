//CREATE CLASS time HAVING int hour and int min, with functions 
#include<iostream>
using namespace std;

class time {
    int hour,min;
    public:
    void gettime() {
        cout<<"Enter value of Hours : ";
        cin>>hour;
        cout<<"Enter value of mins : ";
        cin>>min;
        while(min >= 60) {
            min = min-60;
            hour++;
        }
    }

    void puttime() {
        cout<<"Entered Time in hours is : "<<hour<<endl;
        cout<<"Entered time in minutes is : "<<min<<endl;
    }

    void sum(time ct1,time ct2) {
        int smin, shour;
        shour = ct1.hour + ct2.hour;
        smin = ct1.min + ct2.min;
        while(smin >= 60) {
            smin = smin-60;
            shour++;
        }
        cout<<"Sum of Time is : "<<shour<<" Hours & "<<smin<<" mins"<<endl;
    }

};

int main() {
    time t1,t2,t;
    t1.gettime();
    t1.puttime();
    t2.gettime();
    t2.puttime();
    t.sum(t1,t2);
    return 0;
}