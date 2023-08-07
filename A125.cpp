//Create a file country and enter names of 3 countries. Create another file capital and enter names of 3 capitals. Read all the contents after saving
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1;
    of1.open("country");
    of1<<"India\n";
    of1<<"Japan\n";
    of1<<"Italy\n";
    of1.close();

    of1.open("capital");
    of1<<"New Delhi\n";
    of1<<"Tokyo\n";
    of1<<"Rome";
    of1.close();

    ifstream if1;
    string s1;
    const int N = 20;
    char line[N];
    if1.open("country");
    cout<<"Contents of the file 'country':\n";
    while(if1) {
        if1.getline(line, N);
        cout<<line<<endl;
    }
    if1.close();

    if1.open("capital");
    cout<<"Contents of the file 'capital':\n";
    while(if1) {
        if1.getline(line, N);
        cout<<line<<endl;
    }
    if1.close();

    return 0;
}