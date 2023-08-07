//Display a pattern using write(). Also concatenate 2 strings
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char *str1 = "C++";
    char *str2 = "Programming";
    int l1, l2;
    l1 =  strlen(str1);
    l2 =  strlen(str2);
    int i;
    for(i=0; i<l2; i++) {
        cout.write(str2, i);
        cout<<endl;
    }

    for(i = l2; i> 0; i--) {
        cout.write(str2, i);
        cout<<endl;
    }

    cout.write(str1, l1).write(str2, l2);
    cout<<endl;;
    cout.write(str1, 50);
    return 0;
}