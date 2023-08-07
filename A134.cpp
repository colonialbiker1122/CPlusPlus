//Write a program to implement the concept of stack using template. (Capability to accept all types of data: int, char and float).
#include<iostream>
using namespace std;

template <class mytemp>
class mystack{
  private:
    int maxlen;
    int ptr;
    mytemp *arr;
  public:
    mystack(int l) {
        maxlen = l;
        ptr = -1;
        arr = new mytemp[maxlen];
    }

    void push(mytemp a) {
            if(ptr == maxlen-1) {
            cout<<"FAILURE : Stack is full";
        } else {
            ptr = ptr+1;
            arr[ptr] = a;
            cout<<"SUCCESS : Element "<<a<<" is Pushed\n";
        }
    }

    void pop() {
        if (ptr == -1) {
            cout<<"FAILURE : Stack is Empty";
        } else {
            cout<<"SUCCESS : Element "<<arr[ptr]<<" is popped\n";
            ptr = ptr-1;
        }
    }

    void display() {
        int i;
        if(ptr != -1) {
            for(i=0;i<=ptr;i++) {
                cout<<"Value of element at position "<<i<<" :"<<arr[i]<<endl;
            }
        } else {
                cout<<"FAILURE : Stack is Empty";
            }
    }
};

int main() {
    mystack <int>s1(5);
    cout<<"Inserting First element...\n";
    s1.push(20);
    cout<<"Inserting second element...\n";
    s1.push(30);
    cout<<"Displaying stack contents...\n";
    s1.display();
    cout<<"Popping element...\n";
    s1.pop();
    cout<<"Displaying Stack Elements...\n";
    s1.display();
    cout<<endl;

    mystack <float>s2(5);
    cout<<"Inserting First element...\n";
    s2.push(12.45);
    cout<<"Inserting second element...\n";
    s2.push(89.56);
    cout<<"Displaying stack contents...\n";
    s2.display();
    cout<<"Popping element...\n";
    s2.pop();
    cout<<"Displaying Stack Elements...\n";
    s2.display();
    cout<<endl;

    mystack <char>s3(5);
    cout<<"Inserting First element...\n";
    s3.push('d');
    cout<<"Inserting second element...\n";
    s3.push('c');
    cout<<"Displaying stack contents...\n";
    s3.display();
    cout<<"Popping element...\n";
    s3.pop();
    cout<<"Displaying Stack Elements...\n";
    s3.display();
    cout<<endl;
    return 0;
}