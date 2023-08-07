//Define a class string. Use overloaded == operator to compare 2 strings
#include<iostream>
#include<cstring>
using namespace std;

class String{
    char *p;
    int len;
  public:
    String() {
        len = 0;
        p = 0;
    }
    void getdata(const char * pa) {
        len = strlen(pa);
        p = new char[len];
        strcpy(p, pa);
    }
    void display() {
        cout<<p;
    }

    int operator== (String s2) {
        int ans;
        if(strcmp(p,s2.p)) {
            ans = 1;
        } else {
            ans = 0;
        }
        return ans;
    }
};

int main() {
    String a1, a2;
    a1.getdata("Sumukh");
    a2.getdata("drh");
    if(a1 == a2) {
        cout<<"Both strings are identical\n";
    } else {
        cout<<"Both strings are NOT identical\n";
    }
    return 0;
}