//Simple example of use of Vector
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<string> v1;
    v1.push_back("Sumukh");
    v1.push_back("Colonialbiker");
    for(vector<string>:: iterator itr=v1.begin() ; itr != v1.end() ; itr++ ) {
        cout<<*itr;
    }
    return 0;
}