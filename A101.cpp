//Scan sentences from the user until -1 and save all the data in a file. Also display the contents of the file
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream of1;
    string s1;
    of1.open("file02.txt");

    cout<<"Enter your text below : \n";
    while(of1) {
        getline( cin, s1 );

        if(s1 == "-1") {
            break;
        }
        of1 << s1 << endl;
    }
    of1.close();

    ifstream if1;
    if1.open("file02.txt");

    cout<<"Contents of the file are : \n";
    while(if1) {
        getline(if1, s1);
        //if1 >> s1;
        cout<<s1<<endl;
    }
    if1.close();
    return 0;
}