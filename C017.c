//Bubble Sort
#include<stdio.h>
#define max_size 5

int main() {
    int a[max_size] = {12, 24, 3, 15, 8};
    int i, j, temp;
    for (j=0; j<max_size-2; j++) {
     for(i=0; i<max_size-1; i++) {
        if(a[i] > a[i+1]) {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp; 
        }
    }
    }
    for(i=0; i<max_size;i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}