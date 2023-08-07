//Accept the name of a city and display it using getline()
#include<iostream>
using namespace std;

int main() {
    const int size = 20;
    char city[size];
    
    cout<<"Enter name of a city: ";
    cin.getline(city, size);
    cout<<"Name of city entered is: "<<city<<endl;
    return 0;
}