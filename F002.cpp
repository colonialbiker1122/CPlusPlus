//Rail Fence Cipher
#include<iostream>
#include<vector>
using namespace std;

int main() {
    string a1;
    vector<char> s1, s2;
    int i1 = 0, i2 = 0;

    cout<<"Enter Plaintext: ";
    getline (cin, a1);

    for(int i=0; a1[i] != '\0'; i++) {
        if(i % 2 == 0) {
            s1.push_back(a1[i]);
            i1++;
        } else {
            s2.push_back(a1[i]);
            i2++;
        }
    }

    for(int i2=0; i2 < s1.size(); i2++) {
        cout<<s1[i2];
    }

    for(int i3=0; i3 < s2.size(); i3++) {
        cout<<s2[i3];
    }
    return 0;
}