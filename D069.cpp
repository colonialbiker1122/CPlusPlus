//Class student stores the roll number. Call test stores the marks obtained in 2 subjects. Class sports contains the weightage of sports. Class result can inherit the details of marks obtained in the test and sports and the roll number of students using Virtual Base Classes
#include<iostream>
using namespace std;

class student{
  protected:
    int roll_number;
  public:
    void display_roll_number();
    void set_roll_number(int);
};

class test : virtual public student {
  protected:
    float sub1, sub2;
  public:
    void set_sub1_sub2(float, float);
    void display_sub1_sub2();
};

class sports: virtual public student{
  protected:
    float sport_marks;
  public:
    void set_sport_marks(float);
    void display_sport_marks();
};

class result : public test, public sports {
  protected:
    float result;
  public:
    void display_result();
};

void student :: set_roll_number(int roll) {
    roll_number = roll;
}

void student :: display_roll_number() {
    cout<<"Roll number: "<<roll_number<<endl;
}

void test :: set_sub1_sub2(float a1, float a2) {
    sub1 = a1;
    sub2 = a2;
}

void test :: display_sub1_sub2() {
    cout<<"Marks of Subject 1: "<<sub1<<endl;
    cout<<"Marks of Subject 2: "<<sub2<<endl;
}

void sports :: set_sport_marks(float ps) {
    sport_marks = ps;
}

void sports :: display_sport_marks() {
    cout<<"Marks of Sports: "<<sport_marks<<endl;
}

void result :: display_result() {
    display_roll_number();
    display_sport_marks();
    display_sub1_sub2();
    result = sub1 + sub2 + sport_marks;
    cout<<"Total Marks: "<<result<<endl;
}

int main() {
    result r1;
    r1.set_roll_number(101);
    r1.set_sub1_sub2(18, 19);
    r1.set_sport_marks(20);
    r1.display_result();
    return 0;
}