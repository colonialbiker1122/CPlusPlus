//Create a file and save item name and cost. Also display the file contents after saving
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1("file07");
    char name[20];
    float cost;
    cout<<"Enter name of Item: ";
    cin>>name;
    of1<<name<<endl;
    cout<<"Enter Cost of Item: ";
    cin>>cost;
    of1<<cost<<endl;
    of1.close();

    ifstream if1("file07");
    if1>>name;
    if1>>cost;
    cout<<"Name of Item: "<<name<<endl;
    cout<<"Cost of Item: "<<cost<<endl;
    return 0;
}