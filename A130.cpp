//Create a program which creates 2 files ODD and EVEN using the command-line arguments, and a set of numbers stored in an array are written into these files. Note that the odd numbers are written to the file ODD and even numbers sre written to the file EVEN. the program then displays the contents of these files
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(int argc, char * argv[]) {
    int number[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    if(argc != 3) {
        cout<<"Error in the number of Arguments. Expected number of arguments is 3\n";
        exit(1);
    }

    ofstream of1, of2;

    of1.open(argv[1]);
    if(of1.fail()) {
        cout<<"Error in opening file: "<<argv[1]<<endl;
        exit(1);
    }
    of2.open(argv[2]);
    if(of2.fail()) {
        cout<<"Error in opening file: "<<argv[2]<<endl;
        exit(1);
    }
    int i;
    for(i=0; i<9; i++) {
        if(number[i]%2 == 0) {
            of2<<number[i]<<endl;
        } else {
            of1<<number[i]<<endl;
        }
    }

    of1.close();
    of2.close();

    ifstream if1;
    char ch;
    for(i=1; i<argc; i++) {
        if1.open(argv[i]);
        cout<<"Contents of File "<<argv[i]<<":\n";
        do{
            if1.get(ch);
            cout<<ch;
        } while(if1);

        cout<<endl<<endl;
        if1.close();
    }
    
    return 0;
}