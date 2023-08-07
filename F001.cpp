//Ceaser Cipher
#include<iostream>
#include<cstring>
using namespace std;

int main() {

    string pt;
    cout<<"Enter Plaintext: ";
    getline (cin, pt);
    int key;
    cout<<"Enter key: ";
    cin>>key;

    int temp;
    for(int i=0; i<pt.length(); i++) {
        temp=0;

       if(pt[i] > 65 && pt[i] < 90 || pt[i] > 97 && pt[i] < 122) {
            if(islower(pt[i])) {
                temp = ( pt[i] + key - 97 ) % 26;
                pt[i] = temp + 97;
            } else {
                temp = ( pt[i] + key - 65 ) % 26;
                pt[i] = temp + 65;
            }   
       } else {
           pt[i] = pt[i];
       }
    }
   
    cout<<"Cipher text is: "<<pt;
    return 0;
}