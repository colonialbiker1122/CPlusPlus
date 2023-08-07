//CREATE A CLASS CALLED item to have details of 5 items, having member functions :
#include<iostream>
using namespace std;
int pass=0;
class item{
    int item_code[5];
    float item_price[5];
    public:
    void getitem(){
        int i;
        cout<<"Enter Code and price of each item : \n";
        for(i=0;i<5;i++) {
            cout<<"Enter Item code of Item "<<i+1<<" : ";
            cin>>item_code[i];
            cout<<"Enter Item price of Item "<<i+1<<" : ";
            cin>>item_price[i];
        }
    }
    
    void displaysum(){
        int i,sum=0;
        for(i=0;i<5;i++) {
            sum = sum + item_price[i]; 
        }
        cout<<"Sum of all items is : "<<sum<<endl;
    }

    void remove(){
        int i,j,rpcode;
        cout<<"Enter the code of item to be removed : ";
        cin>>rpcode;
        for (i=0;i<5;i++){
            if(item_code[i] == rpcode) {
                pass=1;
                for(j=i;j<4;j++) {
                    item_code[j]=item_code[j+1];
                    item_price[j]=item_price[j+1];
                }
            }
        }
        if(pass == 0){
            cout<<"FAIL : Item code does not exist\n";
        }
    }

    void displayitem(){
        int i;
        if(pass==0){
            cout<<"Item Details display : "<<endl;
        for(i=0;i<5;i++) {
            cout<<"Item code : "<<item_code[i]<<"\tItem Price : "<<item_price[i]<<endl;
        }
        } else {
            for(i=0;i<4;i++) {
            cout<<"Item code : "<<item_code[i]<<"\tItem Price : "<<item_price[i]<<endl;
        }
        }
    }

};

int main() {
    item n1;
    n1.getitem();
    n1.displaysum();
    n1.remove();
    n1.displayitem();
    return 0;
}