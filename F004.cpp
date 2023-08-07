//Vigenere Cipher
#include<iostream>
using namespace std;

int main() {
    string message, key;
    cout<<"Enter String: ";
    getline(cin,message);
    cout<<"Original String is: "<<message<<endl;

    cout<<"Enter Keyword: ";
    getline(cin,key);
    cout<<"Original Keyword is: "<<key<<endl;

    int temp;
    int k=0;
    for(int i=0; message[k] != '\0'; i++) {
        for(int j=0; key[j] != '\0'; j++, k++) {
            temp = 0;
            if(message[k] > 65 && message[k] < 90 || message[k] > 97 && message[k] < 122) {
                if(islower(message[k])) {
                    temp = ( message[k] + key[j] -97 - 97) % 26;
                    message[k] = temp + 97;
                } else {
                    temp = ( message[k] + key[j] - 130 - 65 ) % 26;
                    message[k] = temp + 130 - 32;
                }   
            } else {
                message[k] = message[k];
            }
        }
    }

    cout<<"Cipher text is: "<<message;
    return 0;
}