//Write a program to evaluate the following investment equation : A = P(1+r)^n and print tables which would give the value of A for various combination of P,r,n
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    int np,nr,nn,i,j,k;
    cout<<"Enter number of principal amounts : ";
    cin>>np;
    float *prin = new float[np];
    cout<<"Enter number of Rate of Interests in p.c.p.a : ";
    cin>>nr;
    float *rate = new float[nr];
    cout<<"Enter number of durations in years : ";
    cin>>nn;
    float *time = new float[nn];

    for(i=0;i<np;i++) {
        cout<<"Enter Principal Amount "<<i+1<<" : ";
        cin>>*(prin + i);
    }

    for(i=0;i<nr;i++) {
        cout<<"Enter Rate of Interest "<<i+1<<" : ";
        cin>>*(rate + i);
    }

    for(i=0;i<nn;i++) {
        cout<<"Enter Duration "<<i+1<<" : ";
        cin>>*(time + i);
    }

    //display results
    cout<<setw(20)<<"Principal"<<setw(20)<<"Time (Years)"<<setw(20)<<"Interest (p.c.p.a)"<<setw(20)<<"Amount"<<endl;
    for(i=0;i<np;i++) {
        for(j=0;j<nn;j++) {
            for(k=0;k<nr;k++) {
                cout<<setw(20)<<*(prin + i)<<setw(20)<<*(time + j)<<setw(20)<<*(rate + k)<<setw(20)<<*(prin + i) * pow(1 + *(rate + k),*(time + j))<<endl;
            }
        }
    }
}