//A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the slaes person inputs the title and author and the system searches the list and displays wheether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the required copies are available, the total cost of the requested copies is displayed otherwise the message "Required copies not in stock" is displayed. Design a system using a class called books with suitable member functions and constructors. Use new operator to allocate memory space required.
//INCOMPLETE
//Max limit of number of books that this program can accomodate is 10
#include<iostream>
#include<cstring>
using namespace std;

class book{
    private:
        string title;
        string author;
        float price;
        string publisher;
        int stock;
    public:
        book() {
            cout<<"Enter Title of Book : ";
            
        }
};

void master_search(string ptitle, string pauthor) {

}

int main() {
    book xyzstore[10];
    int n;
    char e;
    string title, author;
    cout<<"Welcome to the XYZ Book Shop !!!\n";
    do{
        cout<<"1: Search for a book\n";
        cout<<"2: Exit\n";
        cout<<"Enter Command : ";
        cin>>n;
        switch(n) {
            case 1:
            cout<"Enter title of Book: ";
            cin>>title;
            cout<<"Enter Author of Book : ";
            cin>>author;
            master_search(title, author);
            break;

            case 2:
            cout<<"Are you sure you want to Exit the Program ? (Y: Yes)";
            cin>>e;
            if(e == 'Y') {
                cout<<"Exiting Program...";
                exit(0);
            } else {
                cout<<"Continuing...\n";
            }
            break;

            default:
            cout<<"FAILURE: Invalid Command !";
        }
    } while(n != 2);
    return 0;
}