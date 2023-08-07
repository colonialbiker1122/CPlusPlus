//Multilevel Inheritance
#include<iostream>
using namespace std;

class cell{
    public:
    cell() {
        cout<<"It is composed of cells\n";
    }
};

class tissue : public cell{
    public:
        tissue() {
            cout<<"It is composed of tissues\n";
        }
};

class organ : public tissue{
    public:
        organ() {
            cout<<"It is composed of organs\n";
        }
};

class organ_system : public organ{
    public:
        organ_system() {
            cout<<"It is composed of Organ Systems\n";
        }
};

int main() {
    cout<<"A Human Being object will be created now :\n";
    organ_system human;
    return 0;
}