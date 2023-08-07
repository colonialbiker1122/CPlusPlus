//Using outside the class definition of function, rewrite the above program of bank
#include<iostream>
using namespace std;

class bank {
    float amt, bal;
    public:
    void amount();
    void withdraw();
    void deposit();
    void display();
};

void bank::display() {
    cout<<"Current balance is : "<<bal<<endl;
}

void bank::deposit() {
    cout<<"Enter amount to deposit : ";
    cin>>amt;
    bal += amt;
}

void bank::withdraw() {
    cout<<"Enter amount to withdraw : ";
    cin>>amt;
    if(amt>bal) {
        cout<<"COMMAND UNSUCCESSFUL"<<endl;
        cout<<"Amount of withdrawal is greater than current balance"<<endl;
    } else {
        bal -= amt;
    }
}

void bank::amount() {
    cout<<"Enter initial balance amount : ";
    cin>>amt;
    bal = amt;
}

int main() {
    int a;
    bank test2;
    cout<<"WELCOME"<<endl;
    test2.amount();
    cout<<"1 : Deposit"<<endl;
    cout<<"2 : Withdraw"<<endl;
    cout<<"Enter operation to perform : ";
    cin>>a;
    switch(a) {
        case 2:
        test2.withdraw();
        break;

        case 1:
        test2.deposit();
        break;

        default:
        cout<<"WRONG INPUT!"<<endl;
        break;
    };
    test2.display();
    return 0;
}