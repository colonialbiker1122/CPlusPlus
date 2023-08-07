//Create one class logic_gate with virtual function output(). Derive one class AND_Gate with two data members input1 & input2 with function output() to give the AND output of two binary numbers, derive another class OR_Gate from logic_gates with data members input1 & input2 and a function output() to give the OR gate output for two binary numbers.
#include<iostream>
#include<cmath>
using namespace std;

class logic_gate{
  public:
    virtual void output() {

    }

    int binaryToDecimal(long long b) {
        int ans=0;
        int r, i=0;
        while(b>0) {
            r = b%10;
            if(r==0 || r==1) {
            ans = ans + r*pow(2,i);
            b = b/10;
            i++; 
            } else {
                cout<<"Number is not binary number";
                break;
            }
        }

        return ans;
    }

    long long decimalToBinary(int a) {
        long long ans=0;
        int r, i=0;
        while(a>0) {
            r = a%2;
            ans = ans + r*pow(10,i);
            a=a/2;
            i++; 
        }
        return ans;
    }
};

class AND_gate : public logic_gate {
    long input1, input2;
  public:
    void setdata(long long i1, long long i2) {
        input1 = i1;
        input2 = i2;
    }

    long long calcAND() {
        int i1, i2, ans;
        long long myans;
        i1 = binaryToDecimal(input1);
        i2 = binaryToDecimal(input2);
        ans = (i1 & i2);
        myans = decimalToBinary(ans); 
        return myans;
    }

    void output() {
        cout<<"AND of both numbers is: "<< calcAND() <<endl;
    }
};

class OR_gate : public logic_gate {
    long long input1, input2;
  public:
    void setdata(long i1, long i2) {
        input1 = i1;
        input2 = i2;
    }

    long long calcOR() {
        int i1, i2, ans;
        long long myans;
        i1 = binaryToDecimal(input1);
        i2 = binaryToDecimal(input2);
        ans = i1 | i2;
        myans = decimalToBinary(ans); 
        return myans;
    }

    void output() {
        cout<<"OR of both numbers is: "<< calcOR() <<endl;
    }
};



int main() {
    AND_gate a1;
    OR_gate o1;
    long long i1, i2;
    cout<<"Enter first binary number: ";
    cin>>i1;
    cout<<"Enter second binary number: ";
    cin>>i2;
    a1.setdata(i1, i2);
    o1.setdata(i1, i2);
    a1.output();
    o1.output();
    return 0;
}