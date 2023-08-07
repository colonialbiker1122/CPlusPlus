//Multiple Inheritance
#include<iostream>
using namespace std;

class violet{
    public:
        violet() {
            cout<<"I am composed of Violet colour\n";
        }
};

class indigo{
    public:
        indigo() {
            cout<<"I am composed of Indigo colour\n";
        }
};

class blue{
    public:
        blue() {
            cout<<"I am composed of Blue colour\n";
        }
};

class green{
    public:
        green() {
            cout<<"I am composed of Green colour\n";
        }
};

class yellow{
    public:
        yellow() {
            cout<<"I am composed of Yellow colour\n";
        }
};

class orange{
    public:
        orange() {
            cout<<"I am composed of Orange colour\n";
        }
};

class red{
    public:
        red() {
            cout<<"I am composed of Red colour\n";
        }
};

class rainbow : public violet, indigo, blue, green, yellow, orange, red{
    public:
        rainbow() {
            cout<<"I am a Rainbow !!!!";
        }
};

int main() {
    rainbow myfirst;
    return 0;
}