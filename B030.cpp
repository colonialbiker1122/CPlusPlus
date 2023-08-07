//Create a class student having protected data member i.e. int rollno, a public function void getno(). Create class test which is derived from student class by the public data member sub1 & sub 2, this class is having two functions void getmarks(), void putmarks(). Create class result which is derived from test class by public, this class having private data member total, public function dispay() to display the total of subject 1 & subject 2, display roll no, sub1 & sub 2.
#include<iostream>
using namespace std;

class student{
  protected:
    int roll_no;
  public:
    void put_no(int roll) {
        roll_no = roll;
    }

    int get_no() {
        return roll_no;
    }
};

class test: public student{
  public:
    int sub1, sub2;

    void getmarks(int m1, int m2) {
        sub1 = m1;
        sub2 = m2;
    }

    void putmarks() {
        cout<<"Marks of first subject: "<<sub1<<endl;
        cout<<"Marks of second subject: "<<sub2<<endl;
    }
};

class result: public test{
    int total;
  public:
    void display() {
        total = sub1 + sub2;
        cout<<"Roll number: "<<get_no()<<endl;
        putmarks();
        cout<<"Total marks: "<<total<<endl;
    }
};

int main() {
    result a1;
    int v1, v2;
    cout<<"Enter Roll number: ";
    cin>>v1;
    a1.put_no(v1);
    cout<<"Enter marks of First subject: ";
    cin>>v1;
    cout<<"Enter marks of second subject: ";
    cin>>v2;
    a1.getmarks(v1, v2);
    a1.display();
    return 0;
}