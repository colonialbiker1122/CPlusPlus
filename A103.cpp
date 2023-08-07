//Scan the name of a file and display its contents. If the user wants to add anything, make provision for the same
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char a;
    ifstream if1;
    ofstream of1;
    string s1, s2;
    
    cout<<"Enter name of file to view : ";
    cin>>s1;
    if1.open(s1);

    if( !if1 ) {
        cout<<"File does not exist !!!";
        exit(0);
    }

    while (if1) {
        getline(if1, s2);
        cout<<s2<<endl;
    }
    if1.close();

    cout<<"Do you want to add more content to the file ? (Y/n) : ";
    cin>>a;
    
    if(a == 'Y') {
        of1.open(s1, ios_base::app);
        while (of1) {
            getline(cin, s2);
            if (s2 == "-1") {
                break;
            }
            of1 << s2 <<endl;
        }
        of1.close();
    } else if (a == 'n') {
        exit(0);
    } else {
        cout<<"Invalid Input !!!";
        exit(0);
    }

    return 0;
}