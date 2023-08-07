//Create class student: protected - roll_no , public - void get(int), void put(), create class test derived from student : protected - sub1, sub2, public - void get_marks(int, int), void put_marks(). Create class result derived from test : private - total, public - void display() [display roll_no, marks of sub1 and sub2, total], void main()[create the object of result class] 
#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void get(int a) {
            roll_no = a;
        }
        void put() {
            cout<<"Roll number of the student is : "<<roll_no<<endl;
        }
};

class test: public student {
    protected:
        int sub1, sub2;
    public:
        void get_marks(int m1, int m2) {
            sub1 = m1;
            sub2 = m2;
        }
        void put_marks() {
            cout<<"Marks of student in Subject 1 is : "<<sub1<<endl;
            cout<<"Marks of student in Subject 2 is : "<<sub2<<endl;
        }
};

class result : public test {
    private:
        int total;
    public:
        void display() {
            total = sub1 + sub2;
            cout<<"Roll number of the student is : "<<roll_no<<endl;
            cout<<"Marks of student in Subject 1 is : "<<sub1<<endl;
            cout<<"Marks of student in Subject 2 is : "<<sub2<<endl;
            cout<<"Total marks of the student is : "<<total<<endl;
        }
};

int main() {
    result s1;
    s1.get(2);
    s1.get_marks(20,15);
    s1.put();
    s1.put_marks();
    s1.display();
    return 0;
}