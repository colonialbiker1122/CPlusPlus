//FIND LARGEST NUMBER AMONG 3 NUMBERS USING INLINE FUNCTION
#include<iostream>
using namespace std;

inline mymax(int ap, int bp, int cp) {
    if(ap>bp && ap>cp) {
        return ap;
    } else {
        return (bp>cp) ? bp : cp ;
    }
}

int main() {
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    cout<<"Largest of all three numbers is : "<<mymax(a,b,c)<<endl;
    return (0);
}