//Create a base class shape with 2 double type of data members called width and height. Derive 2 classes named triangle and rectangle from the base shape. Add to the base class a member function get_data() to initialize the base class members and another member function display_area() to compute and display the area of figures. Make display_are() virtual function and redefine this function in the derived class. Design a program that will accept dimensions of a triangle or a rectangle interactively and display the area.
#include<iostream>
using namespace std;

class shape{
  protected:
    double base, height;
  public:
    void get_data(double base, double height) {
        this->base = base;
        this->height = height;
    }

    void get_data(double radius) {
        this->base = radius;
    }

    virtual void display_area() {}
};

class triangle : public shape {
    double triarea;
  public:
    void display_area() {
        triarea = 0.5 * base * height;
        cout<<"Area of triangle is: "<<triarea<<endl;
    }
};

class rectangle : public shape {
    double rectarea;
  public:
    void display_area() {
        rectarea = base * height;
        cout<<"Area of rectangle is: "<<rectarea<<endl;
    }
};

class circle : public shape {
    double cirarea;
  public:
    void display_area() {
        cirarea = 3.14 * base * base;
        cout<<"Area of circle is: "<<cirarea<<endl;
    }
};

int main() {
    rectangle r1;
    triangle t1;
    circle c1;
    double base, height;
    cout<<"Rectangle details:\n";
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;
    r1.get_data(base, height);

    cout<<"Triangle details:\n";
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;
    t1.get_data(base, height);
    
    cout<<"Circle Details:\n";
    cout<<"Enter radius: ";
    cin>>base;
    c1.get_data(base);

    r1.display_area();
    t1.display_area();
    c1.display_area();
    return 0;
}