//Create a file ‘numbers’ to store different numbers in it. Read all the numbers from the ‘number’ file and store them in ‘even’ file if number is even and store them in ‘odd’ file if the number odd.
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1, of2;
    of1.open("numbers");
    int count, val;
    cout<<"Enter the number of integers you want to store: ";
    cin>>count;
    for(int i=0; i<count; i++) {
        cout<<"Enter value: ";
        cin>>val;
        of1<<val<<"\n";
    }
    of1.close();

    cout<<"Contents of file 'numbers' is:\n";
    const int N = 20;
    char line[N];
    ifstream if1;
    if1.open("numbers");
    while(if1) {
        if1.getline(line, N);
        cout<<line<<"\n";
    }
    if1.close();

    if1.open("numbers");
    of1.open("even");
    of2.open("odd");

    int n=1;
    char myint[1];
    int n1;
    if1 >> n1;
    while(if1) {
        if(n1%2 ==0) {
            of1<<n1<<"\n";
        } else {
            of2<<n1<<"\n";
        }
        if1 >> n1;
    }

    if1.close();
    of1.close();
    of2.close();

    if1.open("even");
    cout<<"Contents of file 'even' is:\n";
    if1>>n1;
    while(if1) {
        
        cout<<n1<<endl;
        if1>>n1;
    }
    if1.close();

    if1.open("odd");
    cout<<"Contents of file 'odd' is:\n";
    if1>>n1;
    while(if1) {
        
        cout<<n1<<endl;
        if1>>n1;
    }
    if1.close();

    return 0;
}