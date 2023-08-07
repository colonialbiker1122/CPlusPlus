//Create a class employee with data members emp_id, name, salary and having functions void get() for input and void display() for displaying the employee details with their salary in descending order. Take the details of 5 employees with help of new operator.
#include<iostream>
using namespace std;
class employee{
    private:
        int emp_id;
        char name[16];
        float salary;
    public:
        void get() {
            cout<<"Enter ID: ";
            cin>>emp_id;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Salary : ";
            cin>>salary;
        }
        void display() {
            cout<<"ID: "<<emp_id<<endl;
            cout<<"Name of employee : "<<name<<endl;
            cout<<"Salary : "<<salary<<endl;
        }

        friend void sortanddisplay(employee *myptr);
};

void sortanddisplay(employee *ptr)  {
    int a[5], original[5];
    int i, j, temp;

    for(i=0; i<5; i++) {
        a[i] = ptr[i].salary;
        original[i] = ptr[i].salary;
    }

    for (j=0; j<5-2; j++) {
        for(i=0; i<5-1; i++) {
            if(a[i] < a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp; 
            }
        }
    }

    for(i=0; i<5;i++) {
            for(j=0; j<5; j++) {
                if(a[i] == original[j]) {
                    ptr[j].display();
                }
            }
        }
}

int main() {
    employee *ptr;
    ptr = new employee[5];
    int i;
    for(i=0;i<5;i++) {
        ptr[i].get();
    }
    cout<<"Display of Employees:\n";
    sortanddisplay(ptr);
    return 0;
}
