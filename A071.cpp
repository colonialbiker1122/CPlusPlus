//Dynamic Memory Allocation
#include<iostream>
using namespace std;

int main() {
    int *pti;
    float *ptf;
    char *ptc;
    
    pti = new int;
    ptf = new float;
    ptc = new char;

    *ptc = 'a';
    *pti = 32;
    *ptf = 6.625;

    cout<<"Integer is : "<<*pti<<endl;
    cout<<"Character is : "<<*ptc<<endl;
    cout<<"Floating point number is : "<<*pti<<endl;

    delete pti;
    delete ptc;
    delete ptf;
    
    return 0;
}