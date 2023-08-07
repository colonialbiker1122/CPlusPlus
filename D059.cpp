//Convert an int type to class type using Basic to Class type conversion
#include<iostream>
using namespace std;

class time{
    int hrs, mins;
  public:
    time(int t) {
        mins = 0;
        hrs = 0;
        while(t >= 60) {
            mins = t-60;
            t = t-60;
            hrs++;
        }
    }
    void display() {
        cout<<"Hours: "<<hrs<<endl;
        cout<<"Minutes: "<<mins<<endl;
    }
};

int main() {
    int a1;
    cout<<"Enter number of minutes: ";
    cin>>a1;
    time t1 = a1;
    t1.display();
    return 0;
}