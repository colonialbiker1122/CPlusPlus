//Create a class named media which stores the title and price of a publication. Create 2 derived classes named book and tape which stores the number of pages in the book and another stores the playing time of the tape. Use display function to display all the contents
#include<iostream>
#include<cstring>
using namespace std;

class media{
  protected:
    string name;
    float price;
  public:
    media(string c1, float p1) {
        name = c1;
        price = p1;
    }

    virtual void display() {}
};

class book : public media{
  protected:
    int page;
  public:
    book(string c, float p, int page) : media(c, p) {
        this->page = page;
    }

    void display() {
        cout<<"Name of publication: "<<name<<endl;
        cout<<"Price of publication: "<<price<<endl;
        cout<<"Number of Pages: "<<page<<endl;
    }
};

class tape : public media{
  protected:
    float time;
  public:
    tape(string c, float p, float t1) : media(c, p) {
        time = t1;
    }

    void display() {
        cout<<"Name of publication: "<<name<<endl;
        cout<<"Price of publication: "<<price<<endl;
        cout<<"Duration: "<<time<<"min"<<endl;
    }
};
int main() {
    string title;
    float price, time;
    int page;
    
    cout<<"Enter Book details:\n";
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Number of pages: ";
    cin>>page;
    book b1(title, price, page);
    
    cout<<"Enter Tape details:\n";
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    cout<<"Duration in Minutes: ";
    cin>>time;
    tape t1(title, price, time);
    
    media *list[2];
    list[0] = &b1;
    list[1] = &t1;

    cout<<"DETAILS:\n";
    list[0]->display();
    list[1]->display();

    return 0;
}