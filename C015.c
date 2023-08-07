//Merge Sort
#include<stdio.h>

void sort(int arr[], int start, int mid, int end) {
    int i, len;
    len = end - start + 1;
    int temp[len];
    printf("Step:\n");
    printf("Unsorted Array is: ");
    for(i=start; i<=end; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int ps1, ps2;
    ps1 = start;
    ps2 = mid+1;
    int k=0;
    
    while(ps1 <= mid && ps2 <= end) {
        if(arr[ps1] < arr[ps2]) {
            temp[k] = arr[ps1];
            ps1++;
            k++;
        } else {
            temp[k] = arr[ps2];
            ps2++;
            k++;
        }
    }

    while(ps1 <= mid) {
        temp[k] = arr[ps1];
        ps1++;
        k++;
    }

    while(ps2 <= end) {
        temp[k] = arr[ps2];
        ps2++;
        k++;
    }

    int j;
    for(j=start, i=0; j<=end; j++, i++) {
        arr[j] = temp[i];
    }

    printf("Sorted array is: ");
    for(i=start; i<=end; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

void mergesort(int arr[], int start, int end) {
    int mid;
    if(start < end) {
        mid = (start + end) / 2;

        mergesort(arr, start, mid);
        mergesort(arr, mid+1, end);
        sort(arr, start, mid, end);
    }
}

int main() {
    int a[] = {34,87,54,78,23,97,65};
    int i, len;

    len = sizeof(a) / sizeof(a[0]);
    printf("Original Array is: ");
    for(i=0; i<len; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

    mergesort(a, 0, len-1);

    return 0;
}