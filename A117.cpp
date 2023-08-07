//Count the number of characters in a sentetnce entered by the user using get() and put()
#include<iostream>
using namespace std;

int main() {
    char c;
    int count = 0;
    cout<<"Enter text: ";
    cin.get(c);
    while( c != '\n') {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\nNumber of characters in the sentence is: "<<count<<endl;
    return 0;
}