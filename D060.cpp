//Create a class named vector with an integer array data member. Convert vector into a double using Class to Basic Type Converstion
#include<iostream>
#include<cmath>
using namespace std;

class Vector{
    int size;
    int *arr;
  public:
    Vector() {
        size = 0;
        *arr = 0;
    }
    
    Vector(int len, int *ap) {
        size = len;
        arr = new int[size];
        for(int i=0; i< size; i++) {
            arr[i] = ap[i];
        }
    }

    void display() {
        for(int i=0; i< size; i++) {
            cout<<arr[i]<<endl;
        }
    }

    operator double() {
        double ans;
        ans = 0;
        for(int i=0; i<size; i++) {
            ans += arr[i] * arr[i];
        }
        ans = sqrt(ans);
        return ans;
    }
};

int main() {
    int *a, i, size;
    cout<<"Enter size of vector: ";
    cin>>size;
    a = new int[3];
    
    Vector v1(size, a);
    v1.display();
    double d1 = v1;
    cout<<"Scalar form of the vector is: ";
    cout<<d1<<endl;
    return 0;
}