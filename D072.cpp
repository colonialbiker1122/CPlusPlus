//Constructors in Derived Class Example - 2
#include<iostream>
using namespace std;

class alpha{
    int x;
  public:
    alpha(int i) {
        x = i;
        cout<<"Alpha initialized Successfully!!\n";
    }
    
    void showx() {
        cout<<"x: "<<x<<endl;
    }
};

class beta{
    float y;
  public:
    beta(float j) {
        y = j;
        cout<<"Beta Initalized!!\n";
    }

    void showy() {
        cout<<"y: "<<y<<endl;
    }
};

class gamma : public alpha, public beta {
    int m,n;
  public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b) {
        m = c;
        n = d;
        cout<<"Gamma Initialized!!\n";
    }

    void showmn() {
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
    }
};

int main() {
    gamma ob(4, 12.36, 15, 85);
    ob.showx();
    ob.showy();
    ob.showmn();
    return 0;
}