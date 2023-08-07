//Use ‘+’ operator to for string concatenation and ‘>=’ for checking the equality of strings.
#include<iostream>
#include<cstring>
using namespace std;

class myString{
    char *ptr;
    int len;
  public:
    myString() {
        len=0;
        ptr = new char[len+1];
    }

    myString(char *p) {
        len = strlen(p);
        ptr = new char[len+1];
        strcpy(ptr, p);
    }

    void display() {
        cout<<ptr<<endl;
    }

    friend myString operator +(myString, myString);

    bool operator>= (myString m1) {
        bool ans;
        if(ptr == m1.ptr) {
            ans = true;
        } else {
            ans = false;
        }
        return ans;
    }
};

myString operator+(myString m1, myString m2) {
    myString ans;
    ans.len = m2.len + m1.len;
    ans.ptr = new char[ans.len + 1 ];
    strcat(ans.ptr, m1.ptr);
    strcat(ans.ptr, m2.ptr);
    return ans;
}

int main() {
    char name[] = "Sumukh";
    myString s1(name);
    s1.display();

    char name2[] = "Kesarla";
    myString s2(name2);
    s2.display();

    myString s3;
    s3 = s1 + s2;
    cout<<"After concatenation, new string is: ";
    s3.display();

    if(s1 >= s2) {
        cout<<"First and second Strings are equal\n";
    } else {
        cout<<"First and second strings are NOT equal\n";
    }

    return 0;
}