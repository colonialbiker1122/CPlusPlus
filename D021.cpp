//An electricity board charges the following rates to domestic users. For first 100 units, Rs. 0.60 per unit. For next 200 units, Rs. 0.80 per unit. Beyond 300 units, Rs. 0.90 per unit. All users are charged a minumum of Rs. 50. If total amount is more than Rs. 300, additional surcharge of 15% is added.Write a program to read the names of users and number of units consumed and print out the charges with names.
#include<iostream>
using namespace std;

class users{
    protected:
        string name;
        int units;
        float charge = 50.00;
    public:
        void info() {
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter consumption of units : ";
            cin>>units;
        }
        void charges() {
            if (units <= 100) {
                charge += 0.6*units; 
            } else if (units <= 300) {
                charge += 60 + (units-100)*0.8;
            } else if (units > 300) {
                charge += units*0.9;
            }
            if(charge > 300) {
                charge += 0.15*charge;
            }
            cout<<"Name of customer is : "<<name<<endl;
            cout<<"Units of consumption is : "<<units<<endl;
            cout<<"Charges applicable is : "<<charge<<endl;
        }
};

int main() {
    int n,i;
    cout<<"Enter number of users : ";
    cin>>n;
    users *ptr;
    ptr = new users[n];
    
    for(i=0;i<n;i++) {
        cout<<"Consumer "<<i+1<<" : "<<endl;
        ptr[i].info();
    }

    for(i=0;i<n;i++) {
        cout<<endl;
        ptr[i].charges();
    }

    delete[] ptr;
    /*users a1;
    a1.charges();
    a1.display();*/
    return 0;
}