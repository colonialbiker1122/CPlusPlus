//Quick sort
#include<stdio.h>

int partition(int arr[], int start, int end) {
    int pivot, counter=start, i, temp;
    pivot = end;

    for(i=start; i<=end; i++) {
        if(arr[i] < arr[pivot]) {
            temp = arr[i];
            arr[i] = arr[counter];
            arr[counter] = temp;
            counter++;
        }
    }
    temp = arr[end];
    arr[end] = arr[counter];
    arr[counter] = temp;
    
    return counter;
}

void quicksort(int arr[], int start, int end) {
    int i;
    if(start < end) {
        int pivot;
        pivot = partition(arr, start, end);
        quicksort(arr, start, pivot-1);
        quicksort(arr, pivot+1, end);
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

    quicksort(a, 0, len-1);

    printf("Sorted Array is: ");
    for(i=0; i<len; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}