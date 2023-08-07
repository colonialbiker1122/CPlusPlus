//Two files 'source1' and 'source2' contain sorted list of integers. Write a program that reads the contents of both the files and stores the merged list in sorted form in a new file named 'target'
#include<iostream>
#include<fstream>
using namespace std;

void bubblesort(int * a, int n) {
    //int a[5];
    int i, j, temp;
    for (j=0; j<n-2; j++) {
        for(i=0; i<n-1; i++) {
            if(a[i] < a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp; 
            }
        }
    }
}

int main() {
    int arr[20];
    fstream f1;
    int n, i=0, j;
    f1.open("source1.txt");
    while(!f1.eof()) {
        f1>>n;
        arr[i] = n;
        i++;
    }
    f1.close();

    f1.open("source2.txt");
    while(!f1.eof()) {
        f1>>n;
        arr[i] = n;
        i++;
    }
    f1.close(); 

    bubblesort(arr, i);
/*
    for(j=0; j<i; j++) {
        cout<<arr[j]<<endl;
    }
*/
    f1.open("target.txt", ios::out);
        for(j=0; j<i; j++) {
            f1<<arr[j]<<"\n";
        }
    f1.close();
    return 0;
}


