//Design a class polar which describes a point in the plane using polar coordinates radius and angle. A polar co-ordinate point will be denoted by (r,a) where a is the angle from the positive x axis.Use the overloaded operator + to add 2 objects of polar. First convert the points into rectangular co-ordinates, then add the corresponding rectangular coordinates and finally convert back to polar coordinates
#include<iostream>
#include<cmath>
using namespace std;

class polar{
    float r,a;
  public:
    polar(float, float);
    polar operator+ (polar);
    void display() {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of r is: "<<r<<endl;
    }
};

polar :: polar (float rp=0, float ap=0) {
    r = rp;
    a = ap;
}

polar polar :: operator+ (polar p1) {
    polar temp;
    float x1, x2, y1, y2, xt, yt;
    x1 = r * cos(a);
    x2 = p1.r * cos(p1.r);
    y1 = r * sin(a);
    y2 = p1.r * sin(p1.r);
    xt = x1 + x2;
    yt = y1 + y2;
    temp.r = sqrt(xt*xt + yt*yt);
    temp.a = atan(yt/xt);
    return temp;
}

int main() {
    polar p1(5, 0.927295), p2(13, 0.394791), p3;
    p3 = p1 + p2;
    p3.display();
    return 0;
}