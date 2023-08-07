//Abstract Class example
#include<iostream>
using namespace std;

class vehicle{
  private:
    int d1;
    float d2;
  public:
    virtual void spec() = 0;
};

class LMV : public vehicle {
  public:
    void spec() {
        cout<<"I am LMV!!\n";
    }
};

class HMV : public vehicle {
  public:
    void spec() {
        cout<<"I am HMV!!\n";
    }
};

class TW : public vehicle{
  public:
    void spec() {
        cout<<"I am TW!!\n";
    }
};

int main() {
    HMV h1;
    h1.spec();
    LMV l1;
    l1.spec();
    TW t1;
    t1.spec();
    return 0;
}