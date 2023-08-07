//An election is conducted by 5 condidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate number on the ballot paper. Write a program to read the ballots and count the voates cast for each candidate using an array variable count. Incase a number is read outside the range 1 to 5, the ballot should be considered as spoilt ballot and the program should also count spoilt ballots
#include<iostream>
using namespace std;

int main() {
    int ballots[] = {1,2,1,3,6,2,3,4,5,1,2,1,5,4,2,3,1,2,4,5,1,3,1,2,3,4,5,6,1,2,3,4,5,'\0'};    
    int i,c1=0,c2=0,c3=0,c4=0,c5=0,cnull=0;
    
    for(i=0; ballots[i] != '\0'; i++) {
        if (ballots[i] == 1) {
            c1++;
        } else if (ballots[i] == 2) {
            c2++;
        } else if (ballots[i] == 3) {
            c3++;
        } else if (ballots[i] == 4) {
            c4++;
        } else if (ballots[i] == 5) {
            c5++;
        } else {
            cnull++;
        }
    }

    cout<<"Votes for candidate 1 are : "<<c1<<endl;
    cout<<"Votes for candidate 2 are : "<<c2<<endl;
    cout<<"Votes for candidate 3 are : "<<c3<<endl;
    cout<<"Votes for candidate 4 are : "<<c4<<endl;
    cout<<"Votes for candidate 5 are : "<<c5<<endl;
    cout<<"Spoit ballot votes are : "<<cnull<<endl;
    return 0;
}