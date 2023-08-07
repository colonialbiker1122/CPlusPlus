//Search a substring within a string
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int i,j;
    int ans;
    char str[] = "Sumukh is my name!!";
    int len = strlen(str);
    
    char *substr;
    substr = new char[len];
    cout<<"Master string is: "<<str<<endl;
    cout<<"Enter substring to search: ";
    cin>>substr;

    for(i=0; i<len; i++) {
        if(str[i] == substr[0]) {
            ans = 0;
            for(int j=0; j<strlen(substr); j++) {
                if(substr[j] == str[i+j]) {
                    ans++;
                }
            }
        }
    }

    if(ans == strlen(substr)) {
        cout<<"Substring is Found!!\n";
    } else {
        cout<<"Substring is NOT Found!!\n";
    }

    return 0;
}