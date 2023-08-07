//Write a program to design class representing the information regarding digital library (book and tape) should be separate class having the base class as media. The class having the functionality for adding new item, issuing book and deposit. Use the concept of virtual function to make this program.
#include<iostream>
#include<cstring>
using namespace std;

class media{
  protected:
    string title;
    float cost;
    int quantity;

  public:
    void setdata() {
        cout<<"Enter title: ";
        getchar();
        getline(cin, title);
        cout<<"Enter Cost: ";
        cin>>cost;
        cout<<"Enter the quantity: ";
        cin>>quantity;
    }

    virtual void display() {}
};

class book : virtual public media{
  protected:
    int pages;
  public:
    void add_book() {
        setdata();
        cout<<"Enter total pages: ";
        cin>>pages;
    }

    void display() {
        cout<<"Title: "<<title<<endl;
        cout<<"Cost: "<<cost<<endl;
        cout<<"Available quantity: "<<quantity<<endl;
        cout<<"Number of pages in each book: "<<pages<<endl;
    }

    void issue_book() {
        if(quantity != 0) {
            quantity--;
        }
    }

    void deposit_book() {
        quantity++;
    }
};

class tape : virtual public media{
  protected:
    float time;
  public:
    void add_tape() {
        setdata();
        cout<<"Enter duration (in minutes): ";
        cin>>time;
    };

    void display() {
        cout<<"Title: "<<title<<endl;
        cout<<"Cost: "<<cost<<endl;
        cout<<"Available quantity: "<<quantity<<endl;
        cout<<"Duration: "<<time<<endl;
    }

    void issue_tape() {
        if(quantity != 0) {
            quantity--;
        }
    }

    void deposit_tape() {
        quantity++;
    }
};

int main() {
    int maxbookcount, maxtapecount, bookcount, tapecount, i;
    cout<<"Welcome to XYZ Digital Library !!\n";
    cout<<"Enter the max capacity of books which can be stored: ";
    cin>>maxbookcount;
    book *ptrb;
    ptrb = new book[maxbookcount];
    bookcount=0;
    cout<<"Enter the max capacity of tapes which can be stored: ";
    cin>>maxtapecount;
    tape *ptrt;
    ptrt = new tape[maxtapecount];
    tapecount = 0;
    cout<<endl;
    
    int id;
    while(1) {
        int choice, c1;
        cout<<"1: Add new Book\n";
        cout<<"2: Add new Tape\n";
        cout<<"3: Issue a book\n";
        cout<<"4: Issue a tape\n";
        cout<<"5: Deposit a book\n";
        cout<<"6: Deposit a tape\n";
        cout<<"7: Display all Items\n";
        cout<<"8: Exit Program\n";
        cout<<"Enter Operation to perform: ";
        cin>>choice;

        switch(choice) {
            case 1:
            if(bookcount == maxbookcount) {
                cout<<"FAILURE: Achived Full capacity. Cannot add more books!!\n";
            } else {
                ptrb[bookcount].add_book();
                bookcount++;
                cout<<"New book added !!\n";
            }
            break;

            case 2:
            if(tapecount == maxtapecount) {
                cout<<"FAILURE: Achived Full capacity. Cannot add more tapes!!\n";
            } else {
                ptrt[tapecount].add_tape();
                tapecount++;
            }
            break;
                

            case 3:
                for(i=0; i<bookcount; i++) {
                    cout<<"Book ID: "<<i+1<<endl;
                    ptrb[i].display();
                }
                cout<<"Enter the ID of the book which you want too Issue: ";
                cin>>id;
                if(id <= bookcount) {
                    ptrb[id-1].issue_book();
                    cout<<"Book is Issued !!\n";
                } else {
                    cout<<"FAILURE: Invalid ID\n";
                }
            break;

            case 4:
                for(i=0; i<tapecount; i++) {
                    cout<<"Tape ID: "<<i+1<<endl;
                    ptrt[i].display();
                }
                cout<<"Enter the ID of the tape which you want too Issue: ";
                cin>>id;
                if(id <= tapecount) {
                    ptrt[id-1].issue_tape();
                    cout<<"Tape is Issued !!\n";
                } else {
                    cout<<"FAILURE: Invalid ID\n";
                }
            break;

            case 5:
                for(i=0; i<bookcount; i++) {
                    cout<<"Book ID: "<<i+1<<endl;
                    ptrb[i].display();
                }
                cout<<"Enter the ID of the book which you want too Issue: ";
                cin>>id;
                if(id <= bookcount) {
                    ptrb[id-1].deposit_book();
                    cout<<"Book is Deposited !!\n";
                }
            break;

            case 6:
                for(i=0; i<tapecount; i++) {
                    cout<<"Tape ID: "<<i+1<<endl;
                    ptrt[i].display();
                }
                cout<<"Enter the ID of the tape which you want too Issue: ";
                cin>>id;
                if(id <= bookcount) {
                    ptrt[id-1].deposit_tape();
                    cout<<"Tape is Deposited !!\n";
                }
            break;

            case 7:
                for(i=0; i<bookcount; i++) {
                    cout<<"Book ID: "<<i+1<<endl;
                    ptrb[i].display();
                }
                for(i=0; i<tapecount; i++) {
                    cout<<"Tape ID: "<<i+1<<endl;
                    ptrt[i].display();
                }
            break;

            case 8:
                char confirmexit;
                cout<<"Are you sure you want to Exit the program (Y/N) ?? ";
                cin>>confirmexit;
                if(confirmexit == 'Y' || confirmexit == 'y') {
                    cout<<"Exiting Program...";
                    exit(0);
                }
            break;

            default:
            cout<<"Invalid Input!!\n";
        }

    }
    return 0;
}