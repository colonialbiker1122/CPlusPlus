//Binary Sort
#include<stdio.h>
#define max_size 9

int binarySearch(int a[], int first, int last, int val ) {
    int mid;
    if(first <= last) {
        mid = first + (last - first) / 2;
        if(a[mid] == val) {
           return 1;
        } else if(val < a[mid]) {
            binarySearch( a, first, mid - 1, val );
        } else if(val > a[mid]) {
            binarySearch( a, mid + 1, last, val );
        }
    }
}

int main() {
    int a[max_size] = {20, 28, 30, 58, 60, 79, 80, 82, 99};
    int val, first, last, ans;
    first = 0;
    last = max_size;
    printf("Enter a number: ");
    scanf("%d",&val);
    ans = binarySearch(a, first, last, val);
    if(ans == 1) {
        printf("Element is found!!\n");
    } else {
        printf("Element NOT found!!\n");
    }
    return 0;
}