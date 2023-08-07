//WAP using 'class' with name bank, with functions to input value of amount, withdraw, deposited and display the amount
#include<iostream>
using namespace std;

class bank {
    private :
    float bal;
    public:
    void amount() {
        float amt;
        cout<<"Enter initial balance amount : ";
        cin>>amt;
        bal = amt;
    }
    void withdraw() {
        float amt;
        cout<<"Enter the amount to be withdrawed : ";
        cin>>amt;
        if(amt>bal) {
            cout<<"Command UNSUCCESSFUL"<<endl;
            cout<<"Amount of withdrawal is greater than exisiting balance"<<endl;
        } else {
            bal -= amt;
        }
    }
    void deposit() {
        float amt;
        cout<<"Enter amount to be deposited : ";
        cin>>amt;
        bal += amt;
    }
    void display() {
        cout<<"Current balance in your account is : "<<bal<<endl;
    }
};

int main() {
    int a;
    bank test1;
    cout<<"WELCOME !!!"<<endl;
    test1.amount();
    cout<<"1 : Deposit"<<endl;
    cout<<"2 : Withdraw"<<endl;
    cout<<"Enter operation to perform : ";
    cin>>a;
    switch(a) {
        case 1:
        test1.deposit();
        break;

        case 2:
        test1.withdraw();
        break;
    }
    test1.display();
    return 0;
}