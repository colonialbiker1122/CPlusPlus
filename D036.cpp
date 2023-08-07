//Create 2 classes DM and DB which store values of distances. DM stores distances in meters and centimeters and DB in feet and inches. Write a program that can read values for class objects and add one object of DM with another object of DB. Object that stores the results may be DM or DB based on units in which the results is required.
#include<iostream>
using namespace std;

class DB;

class DM {
    private:
        int meters;
        int centimeters;
    public:
        void get() {
        cout<<"Enter Distance in meters and centimeters :\n";
        cout<<"Enter meters : ";
        cin>>meters;
        cout<<"Enter centimeters : ";
        cin>>centimeters;
        }
        void display();
        friend DM addDM(DM ,DB);
        friend DB addDB(DM ,DB);
};

class DB{
    private:
        int feet;
        int inches;
    public:
        void get() {
        cout<<"Enter Distance in feet and inches :\n";
        cout<<"Enter feet : ";
        cin>>feet;
        cout<<"Enter inches : ";
        cin>>inches;
        }
        void display();
        friend DM addDM(DM ,DB);
        friend DB addDB(DM ,DB);
};

void DM :: display() {
    cout<<"Distance : "<<meters<<" m "<<centimeters<<" cm\n";
}

void DB :: display() {
    cout<<"Distance : "<<feet<<" feet "<<inches<<" in\n";
}

DM addDM(DM m, DB b) {
    DM temp;
    temp.meters = 0;
    temp.centimeters = 0;
    while(m.meters > 0) {
        m.meters--;
        m.centimeters += 100;
    }
    while(b.feet > 0) {
        b.feet--;
        b.inches += 12;
    }
    temp.centimeters = m.centimeters + b.inches*2.54;
    while(temp.centimeters > 100) {
        temp.centimeters -= 100;
        temp.meters++;
    }
    return temp;
}

DB addDB(DM m, DB b) {
    DB temp;
    temp.feet = 0;
    temp.inches = 0;
    while(m.meters > 0) {
        m.meters--;
        m.centimeters += 100;
    }
    while(b.feet > 0) {
        b.feet--;
        b.inches += 12;
    }
    temp.inches = m.centimeters*0.394 + b.inches;
    while(temp.inches > 12) {
        temp.inches -= 12;
        temp.feet++;
    }
    return temp;
}

int main() {
    DM m1, m2;
    DB b1, b2;
    m1.get();
    b1.get();
    m2 = addDM(m1, b1);
    b2 = addDB(m1, b1);
    cout<<"Sum of distances in meters :\n";
    m2.display();
    cout<<"Sm of distances in feet :\n";
    b2.display();
    return 0;
}