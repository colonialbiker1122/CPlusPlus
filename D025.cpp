//Write a program to showcase arrays within a class. create class named items with int itemcode[], float itemprice[], int count and following functions : void cnt(), void getitem(), void displaysum(), void remove(), void displayitems()
#include<iostream>
using namespace std;
#define m 50
class items{
    private:
        int itemcode[m];
        float itemprice[m];
        int count;
    public:
        void cnt() {count = 0;}
        void getitem();
        void displaysum();
        void remove();
        void displayitems();
};

void items::getitem() {
    cout<<"Enter Item code : ";
    cin>>itemcode[count];
    cout<<"Enter Item Price : ";
    cin>>itemprice[count];
    count++;
    cout<<"ITEM ADDED SUCCESSFULLY !!!"<<endl;
}

void items::displaysum() {
    int i,sum=0;
    for(i=0;i<count;i++) {
        sum += itemprice[i];
    }
    cout<<"Sum of all items is : "<<sum<<endl;
}

void items::displayitems(){
    int i;
    for(i=0;i<count;i++) {
        cout<<"Item code : "<<itemcode[i]<<endl
            <<"Item Price : "<<itemprice[i]<<endl;
    }
}

void items::remove() {
    int code, i;
    cout<<"Enter Item code : ";
    cin>>code;
    for(i=0;i<count;i++) {
        if(itemcode[i] == code) {
            itemprice[i] = 0;
        }
    }
}

int main() {
    items a1;
    a1.cnt();
    int a;
    do {
        cout<<"\n1 : Add an Item"<<endl
            <<"2 : Display total value"<<endl
            <<"3 : Delete an Item"<<endl
            <<"4 : Display all items"<<endl
            <<"5 : Exit Program"<<endl
            <<"Enter oeration to perform : "<<endl;
        cin>>a;
        switch(a) {
            case 1:
            a1.getitem();
            break;

            case 2:
            a1.displaysum();
            break;

            case 3:
            a1.remove();
            break;

            case 4:
            a1.displayitems();
            break;

            case 5:
            cout<<"PROGRAM TERMINATED SUCCESSFULLY !!!";
            exit(0);
            break;

            default:
            cout<<"Invalid Input !!";
        }
        
    }while(a != 5);
    return 0;
}