//Create a class named item with code and price as data members. Create an array of object. Insert and Display data using appropirate functions accordingly
#include<iostream>
using namespace std;

class item{
    int code;
    float price;
  public:
    void getdata();
    void display();
};

void item :: getdata() {
    cout<<"Enter Code of item: ";
    cin>>code;
    cout<<"Enter price of Item: ";
    cin>>price;
}

void item :: display() {
    cout<<"Code of Item: "<<code<<endl;
    cout<<"Price of Item: "<<price<<endl;
}

const int number = 3;

int main() {
    int i;
    item *ptr;
    ptr = new item[number];
    for(i=0; i< number; i++) {
        cout<<"Enter data for Item "<<i+1<<":\n";
        ptr[i].getdata();
    }

    for(i=0; i< number; i++) {
        cout<<"Deatils of Item "<<i+1<<":\n";
        ptr[i].display();
    }

    delete[] ptr;
    return 0;
}