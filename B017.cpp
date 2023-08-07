//Heirarcial Inheitance
#include<iostream>
using namespace std;

class grade_12 {
    public:
        grade_12() {
            cout<<"A Grade 12 Subject\n";
        }
};

class science : public grade_12 {
    public:
        science() {
            cout<<"A Science Subject\n";          
        }
};

class commerce : public grade_12 {
    public:
        commerce() {
            cout<<"A Commerce Subject\n";          
        }
};

class arts : public grade_12 {
    public:
        arts () {
            cout<<"An Arts Subject\n";          
        }
};

class physics : public science {
    public:
        physics () {
            cout<<"A Physics Subject\n";          
        }
};

class chemistry : public science {
    public:
        chemistry () {
            cout<<"A Chemistry Subject\n";          
        }
};

class accounts : public commerce {
    public:
        accounts () {
            cout<<"An Accounts Subject\n";          
        }
};

class ocm : public commerce {
    public:
        ocm() {
            cout<<"An Organization of commerce and Management Subject\n";          
        }
};

class history : public arts {
    public:
        history () {
            cout<<"A History Subject\n";          
        }
};

class sociology : public arts {
    public:
        sociology () {
            cout<<"A Sociology Subject\n";          
        }
};

int main() {
    cout<<"Rotational Mechanics is :\n";
    physics rotational_mechanics;
    return 0;
}