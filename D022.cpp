//Create a class item with 2 private data members int number and float cost, and 2 public functions getdata() and putdata(). Create 2 objects and show complete functionality
#include<iostream>
using namespace std;

class item{
    private:
        int number;
        float cost;
    public:
        void getdata();
        void putdata();
};

void item::getdata(){
    cout<<"Enter Item number : ";
    cin>>number;
    cout<<"Enter cost of item : ";
    cin>>cost;
}

void item::putdata() {
    cout<<"\nItem number is : "<<number<<endl;
    cout<<"Item cost is : "<<cost<<endl;
}

int main() {
    item a1,a2;
    a1.getdata();
    a2.getdata();
    a1.putdata();
    a2.putdata();
    return 0;
}