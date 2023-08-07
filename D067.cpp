//Class student stores the roll number. Call test stores the marks obtained in 2 subjects. Class sports contains the weightage of sports. Class result can inherit the details of marks obtained in the test and sports and the roll number of students using hybrid inheritance
#include<iostream>
using namespace std;

class student{
  protected:
    int roll_number;
  public:
    int get_roll_number();
    void set_roll_number(int);
};

class test : public student {
  protected:
    float sub1, sub2;
  public:
    void set_sub1_sub2(float, float);
    float get_sub1();
    float get_sub2();
};

class sports{
  protected:
    float sport_marks;
  public:
    void set_sport_marks(float);
    float get_sport_marks();
};

class result : public test, public sports {
  protected:
    float result;
  public:
    void set_result();
    void get_result();
};

void student :: set_roll_number(int roll) {
    roll_number = roll;
}

int student :: get_roll_number() {
    return roll_number;
}

void test :: set_sub1_sub2(float a1, float a2) {
    sub1 = a1;
    sub2 = a2;
}

float test :: get_sub1() {
    return sub1;
}

float test :: get_sub2() {
    return sub2;
}

void sports :: set_sport_marks(float ps) {
    sport_marks = ps;
}

float sports :: get_sport_marks() {
    return sport_marks;
}

void result :: set_result() {
    result = (get_sub1() + get_sub2() + get_sport_marks()) / 3;
    //result = sub1 + sub2 + sport_marks; ... This WORKS TOO !!!
}

void result :: get_result() {
    cout<<"Roll number: "<<get_roll_number()<<endl;
    cout<<"Marks of Subject 1: "<<get_sub1()<<endl;
    cout<<"Marks of subject 2: "<<get_sub2()<<endl;
    cout<<"Marks of sports: "<<get_sport_marks()<<endl;
    set_result();
    cout<<"Average marks of student: "<<result<<endl;
}

int main() {
    result r1;
    r1.set_roll_number(101);
    r1.set_sub1_sub2(18, 19);
    r1.set_sport_marks(20);
    r1.get_result();
    return 0;
}