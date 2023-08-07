//Initialization List in Constructors
#include<iostream>
using namespace std;

class alpha{
    int x;
  public:
    alpha(int i) {
        x = i;
        cout<<"Alpha Initialized!!\n";
    }

    void showalpha() {
        cout<<"x: "<<x<<endl;
    }
};

class beta{
    float p,q;
  public:
    beta(float a, float b) : p(a), q(b + p) {
        cout<<"Beta Initialized!!\n";
    }

    void showbeta() {
        cout<<"p: "<<p<<endl;
        cout<<"q: "<<q<<endl;
    }
};

class gamma : public alpha, public beta {
    int u,v;
  public:
    gamma(int a, float b, int c) : alpha(a*2), beta(b,b), u(a) {
        v = c;
        cout<<"Gamma Initialized!!\n";
    }

    void showgamma() {
        cout<<"u: "<<u<<endl;
        cout<<"v: "<<v<<endl;
    }
};

int main() {
    gamma g1(5, 10.6, 24);
    g1.showalpha();
    g1.showbeta();
    g1.showgamma();
    return 0;
}