//Create a class named city which stores and display the name of a city. Create an array of pointers to show and display many city names
#include<iostream>
#include<cstring>
using namespace std;

class city{
    int len;
    char *p;
  public:
    city() {
        len = 0;
        p = new char[len + 1];
    }

    void getdata(char *ptr) {
        len = strlen(ptr);
        p = new char[len + 1];
        strcpy(p, ptr);
    }

    void display() {
        cout<<p<<endl;
    }
};

const int maxlen = 5;

int main() {
    city *ptr;
    ptr = new city[maxlen];
    int i;
    ptr[0].getdata("Pune");
    ptr[1].getdata("Delhi");
    ptr[2].getdata("Mumbai");
    ptr[3].getdata("Kolkata");
    ptr[4].getdata("Chennai");
    
    for(i=0; i<maxlen; i++) {
        ptr[i].display();
    }
    return 0;
}