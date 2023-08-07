//Use of at() function in Vectors
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v1;
    v1 = {1,2,3,4,5,6,7,8};
    cout<<v1.at(3)<<endl;
    cout<<v1.at(0)<<endl;
    //cout<<v1.at(10)<<endl; will show error1
    return 0;
}