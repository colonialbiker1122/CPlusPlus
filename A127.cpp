//Read and Write file contents using get() and put()
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
    char s1[50];
    cout<<"Enter a string: ";
    cin>>s1;
    int len = strlen(s1);
    ifstream if1;
    ofstream of1;
    char c;
    of1.open("file08.txt");
    for(int i=0; i<len; i++) {
        of1.put(s1[i]);
    }
    of1.close();

    if1.open("file08.txt");
    char ch;
    cout<<"Reading file contents...\n";
    while(if1) {
        if1.get(ch);
        cout<<ch;
    }
    return 0;
}