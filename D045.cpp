//Write a program to find a prime number using constructor
#include<iostream>
using namespace std;

class test{
    public:
        test(int n) {
            int i;
            int flag=0, rem=0;
            for(i=2;i<n;i++) {
                if(n%i == 0) {
                    flag++; 
                }
            }
            if(flag == 0) {
                cout<<"The number is a prime number\n";
            } else {
                cout<<"The number is a composite number\n";
            }
        }
};

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    test T(num);
    return 0;
}