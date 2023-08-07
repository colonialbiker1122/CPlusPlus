//Create an array of pointers which pointes to fininte amount of character arrays / strings
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char *ptr[] = {"sumukh", "qwerty", "asdfgh", "zxcvbn", "123456", "!@#$%^"};
    int i;
    char val[20];
    cout<<"Enter value of string: ";
    cin>>val;
    for(i=0; i<6; i++) {
        if( strcmp(val, *ptr[i]) ) {
            cout<<"Element found!!\n"<<endl;
        }
    }
    return 0;
}