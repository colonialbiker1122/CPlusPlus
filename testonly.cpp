//ceaser cipher

#include<iostream>
#include<vector>
using namespace std;

int main() {
    string plaintext;
    vector <int> v1;
    int depth;
    cout<<"ENter Plaintext";
    getline(cin, plaintext);
    cout<<"ENter depth";
    cin>>depth;

    int k=0;
    for(int j=0; j<depth; j++) {
        // cout<<k<<" ";
        v1.push_back(k);
        k++;
    }
    for(int i=0; i<20; i++) {
        for(int j=0; j<depth-1; j++) {
            // cout<<k<<" ";
            v1.push_back(k);
            k--;
        }
        for(int j=0; j<depth-1; j++) {
            // cout<<k<<" ";
            v1.push_back(k);
            k++;
        }
    }

    vector <vector<int>> ans;
    for(int i=0; plaintext[i] != '\0'; i++) {
        if() {
            
        }
    }
    return 0;
}