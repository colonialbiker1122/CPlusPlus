//Use ‘==’ operator to check whether the areas of two circles are same or not.
#include<iostream>
using namespace std;

class myCircle{
    float area;
  public:
    void setdata(float area) {
        this->area = area;
    }

    void display() {
        cout<<"Area of circle: "<<area<<endl;
    }

    friend bool operator ==(myCircle, myCircle);
};

bool operator ==(myCircle m1, myCircle m2) {
    bool ans;
    if(m2.area == m1.area) {
        ans = true;
    } else {
        ans = false;
    }
    return ans;
}

int main() {
    myCircle c1, c2;
    int val;
    cout<<"Enter area of first circle: ";
    cin>>val;
    c1.setdata(val);
    cout<<"Enter area of second circle: ";
    cin>>val;
    c2.setdata(val);

    if(c1 == c2) {
        cout<<"Both circles have same area\n";
    } else {
        cout<<"Both Circles do not have same area\n";
    }

    return 0;
}