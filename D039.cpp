//Dynamic Initialization of objects: Create a class named fixed_deposit with principal, years, rate, amount with constructors and display functions.
//PROBLEM !!!!! PROBLEM !!!!
#include<iostream>
using namespace std;

class fixed_deposit{
    private:
        int principal;
        int years;
        float rate;
        float amount;
    public:
        fixed_deposit(){}
        fixed_deposit(int p, int y, float r=0.12);
        fixed_deposit(int p, int y, int r);
        void display();
};

fixed_deposit :: fixed_deposit(int p, int y, float r) {
    int i;
    principal = p;
    years = y;
    rate = r;
    amount = principal;
    for(i=0;i<y;i++) {
        amount = amount*(1+rate);
    }
}

fixed_deposit :: fixed_deposit(int p, int y, int r) {
    int i;
    principal = p;
    years = y;
    rate = r/100;
    amount = principal;
    for(i=0;i<y;i++) {
        amount = amount*(1+rate);
    }
}

void fixed_deposit :: display() {
    cout<<"Principal : "<<principal<<endl
        <<"Years : "<<years<<endl
        <<"Rate of interest : "<<rate<<endl
        <<"Amount : "<<amount<<endl;
}

int main() {
    fixed_deposit a1,a2,a3;
    a1 = fixed_deposit(10000, 3, 18);
    a2 = fixed_deposit(10000, 3, 12);
    a3 = fixed_deposit(10000, 3, 0.1);
    cout<<"FD 1 :\n";
    a1.display();
    cout<<"FD 2 :\n";
    a2.display();
    cout<<"FD 3 :\n";
    a3.display();
    return 0;
}