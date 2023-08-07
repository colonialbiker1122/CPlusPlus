//Specifying field size using width()
#include<iostream>
using namespace std;

int main() {
    int items[4] = {10, 20, 30, 45};
    int cost[4] = {45, 20, 65, 10};
    cout.width(5);
    cout<<"ITEMS";
    cout.width(8);
    cout<<"COST";
    cout.width(15);
    cout<<"TOTAL COST"<<endl;

    int i;
    int sum;
    for(i=0; i<4; i++) {
        sum = 0;
        cout.width(5);
        cout<<items[i];
        cout.width(8);
        cout<<cost[i];
        cout.width(15);
        sum = items[i] * cost[i]; 
        cout<<sum<<endl;
    }
    return 0;
}