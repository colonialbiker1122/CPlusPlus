//Using STL implement the list data structure and perform insertion, deletion, sorting, merging and reversing of lists.
#include<iostream>
#include<list>
using namespace std;

void display(list<int> mylist) {
    list<int>::iterator it;
    for(it=mylist.begin(); it!=mylist.end(); it++) {
       cout <<  *it << " ";
   }
   cout<<endl;
}

int main() {
    list<int> l1,l2;
    int i, n1, n2, val;

    cout<<"INSERTION:\n";
    
    cout<<"Enter number of elements in First list: ";
    cin>>n1;
    for(i=0; i<n1; i++) {
        cout<<"Enter value: ";
        cin>>val;
        l1.push_back(val);
    }
    display(l1);

    cout<<"Enter number of elements in Second list: ";
    cin>>n2;
    for(i=0; i<n2; i++) {
        cout<<"Enter value: ";
        cin>>val;
        l2.push_back(val);
    }
    display(l2);

    cout<<"DELETION:\n";
    l1.pop_back();
    cout<<"Last element of first list is deleted\n";
    display(l1);

    l2.pop_front();
    cout<<"First Element of Second list is deleted\n";
    display(l2);

    cout<<"SORTING:\n";

    l1.sort();
    l2.sort();
    cout<<"First List is: ";
    display(l1);
    cout<<"Second list is: ";
    display(l2);

    cout<<"MERGING:\n";
    
    l1.merge(l2);
    cout<<"Merged List is: ";
    display(l1);

    cout<<"REVERSAL:\n";

    l1.reverse();
    cout<<"After Reversal, list is: ";
    display(l1);

    return 0;
}