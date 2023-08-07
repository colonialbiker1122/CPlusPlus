//Overload the subscript operator []
#include<iostream>
using namespace std;

class arr{
    int a[5];
  public:
    arr(int *x) {
        int i;
        for(i=0; i<5; i++) {
            a[i] = x[i];
        }
    }
    int operator[] (int k) {
        return a[k];
    }
};

int main() {
    int a1[5] = {1,2,3,4,5};
    arr arr1(a1);
    int i;
    for(i=0; i<5; i++) {
        cout<<arr1[i]<<endl;
    }
    return 0;
}