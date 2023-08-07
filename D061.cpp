//Create 2 classes named mks with data members of meters, kilogram, second and cgs with data members centimeter, gram and second all of which are types of double. Convert the objects using one class to another class type conversion
#include<iostream>
using namespace std;

class cgs;
class mks{
    float m, kg, s;
  public:
    mks(float, float, float);
    //mks(cgs m1);
    operator cgs();
    void display();
};
class cgs{
    float cm, gm, s;
  public:
    cgs(float, float, float);
    //cgs(mks c1);
    operator mks();
    void display();
};

mks :: mks(float pm, float pkg, float ps) {
    m = pm;
    kg = pkg;
    s = ps;
}

cgs :: cgs (float pcm, float pgm, float ps) {
    cm = pcm;
    gm = pgm;
    s = ps;
}

void mks :: display() {
    cout<<"Meters: "<<m<<endl;
    cout<<"Kilograms: "<<kg<<endl;
    cout<<"Seconds: "<<s<<endl;
}

void cgs :: display() {
    cout<<"Centimeters: "<<cm<<endl;
    cout<<"Grams: "<<gm<<endl;
    cout<<"Seconds: "<<s<<endl;
}

mks :: operator cgs () {
    cgs temp;
    temp.cm = m * 100;
    temp.gm = kg * 1000;
    temp.s = s;
    return temp;
}
/*
cgs :: operator mks () {
    mks ans;
    ans.m = cm / 100;
    ans.kg = gm / 1000;
    ans.s = s;
    return ans;
}
*/
int main() {
    mks m1(12, 2.5, 236);
    cgs c1 = m1;
    return 0;
}