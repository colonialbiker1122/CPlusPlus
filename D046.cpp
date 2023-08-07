//Define a class String that could work as a user-defined string type. Include constructors that will enable us to create an uninitialized string and also to initialize an object with a string constant at the time of creatin. Include a function that adds 2 strings to make a third string. Write a complete program to to test your class to see that it does the following tasks : 1. Creates uninitialized string objects 2. Creates objects with string classes 3. Concatenates 2 strings 4. Displays a desired string object
#include<iostream>
using namespace std;

class String{
    private:
        char *ptr;
        int length;
    public:
        String() {
            
        }
};

int main() {
    char *ptr[7];
    *ptr = "Sumukh";
    cout<<*ptr;
    return 0;
}