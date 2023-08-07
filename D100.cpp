//Illustrate the use of vector class template for performing the scalar multiplication of int/float type of data vectors
#include<iostream>
using namespace std;

template <class T>
class vector{
    T arr[3];
  public:
    void setdata(T *a) {
        for(int i=0; i<3; i++) {
            arr[i] = a[i];
        }
    }

    T operator*(vector b) {
        T ans = 0;
        for(int i=0; i<3; i++) {
            ans += b.arr[i] * arr[i];
        }
        return ans;
    }

    void display() {
        for(int i=0; i<3; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    // vector <int>v1, v2;
    // int a1[3] = {1, 2, 3};
    // int a2[3] = {4, 5, 6};

    vector <float>v1, v2;
    float a1[3] = {4.23, 5.89, 4.12};
    float a2[3] = {8.23, 5.33, 6.10};

    v1.setdata(a1);
    v2.setdata(a2);
    cout<<"First Vector: ";
    v1.display();
    cout<<"Second vector: ";
    v2.display();

    cout<<"Scalar multiplication is: "<<v1*v2;
    return 0;
}