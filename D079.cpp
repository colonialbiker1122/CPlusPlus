//Create a class named person with data members as name and age. Create a function which will decide and retrun the maximum age between 2 persons
#include<iostream>
#include<cstring>
using namespace std;

class person{
    char name[20];
    int age;
  public:
    person() {
        cout<<"Enter name of person: ";
        cin>>name;
        cout<<"Enter age of person: ";
        cin>>age;
    }

    void display() {
        cout<<"Name of Person: "<<name<<endl;
        cout<<"Age of Person: "<<age<<endl;
    }

    person & greater(person & p1) {
        if(p1.age > age) {
            return p1;
        } else {
            return *this;
        }
    }
};

int main() {
    person p1, p2;
    person p3 = p1.greater(p2);
    cout<<"Elder person is:\n";
    p3.display();
    return 0;
}