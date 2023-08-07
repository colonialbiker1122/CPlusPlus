//Write a Program to read the figures in a set format, calculate the batting averages and print the complete table including the averages
//Batting average = runs scored / no of times player has got out
#include<iostream>
using namespace std;

int main() {
    //string name[5];
    int n, i;//, runs[5], innings[5], notout[5];
    cout<<"Enter number of players : ";
    cin>>n;
    int *runs = new int[n];
    int *innings = new int[n];
    int *notout = new int[n];
    float *bavg = new float[n];
    string *name = new string[n];

    cout<<"Enter details as shown in the following table (use TAB key): "<<endl;
    cout<<"Name\t\tRuns\t\tInnings\t\tTimes Not Out"<<endl;
    for(i=0;i<n;i++) {
    cin>>name[i]>>runs[i]>>innings[i]>>notout[i];
    }
    cout<<endl;

    cout<<"Name\t\tRuns\t\tInnings\t\tTimes Not Out\t\tBatting Average"<<endl;
    for(i=0;i<n;i++) {
        bavg[i] = runs[i]/(innings[i]-notout[i]);
    cout<<name[i]<<"\t\t"<<runs[i]<<"\t\t"<<innings[i]<<"\t\t"<<notout[i]<<"\t\t"<<bavg[i]<<endl;
    }
    return 0;
}