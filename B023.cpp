//Create a class book with data members book_id, book_name & publisher_name with functions void get() to take values, and void display() to print the values, use dynamic memory allocation to take input for 5 books and display them
#include<iostream>
using namespace std;

class book{
    int book_id;
    string book_name, publisher_name;
  public:
    void get();
    void display();
};

void book :: get() {
    cout<<"Enter Book ID: ";
    cin>>book_id;
    cout<<"Enter Book Name: ";
    cin>>book_name;
    cout<<"Enter Publisher Name: ";
    cin>>publisher_name;
}

void book :: display() {
    cout<<"Book ID: "<<book_id<<endl;
    cout<<"Book Name: "<<book_name<<endl;
    cout<<"Publisher Name: "<<publisher_name<<endl;
}

int main() {
    book *ptr;
    ptr = new book[5];
    int i;
    for(i=0; i<5; i++) {
        cout<<"Book "<<i+1<<":\n";
        ptr[i].get();
    }
    cout<<"Display Book Details: \n";
    for(i=0; i<5; i++) {
        cout<<"Book "<<i+1<<":\n";
        ptr[i].display();
    }
    return 0;
}