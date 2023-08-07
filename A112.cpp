//Perform Linear Search on an array using pointers
#include<iostream>
using namespace std;

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, n, *ptr, *ptra;
    ptra = &a[0];
    ptr = &n;
    cout<<"An integer array is defined from 0 to 10 with 1 as incerment\n";
    cout<<"Enter a number to search in the array: ";
    cin>>n;
    for(i=0; i<11; i++, ptra++) {
        if(*ptra == *ptr) {
            cout<<"Element Found!!\n";
            break;
        }
    }
    return 0;
}