#include <stdio.h>
#define size 7

int main()
{
    int val;
    int a[size] = {3, 4, 5, 6, 7, 8, 9};

    printf("Enter element which you want to search: ");
    scanf("%d", &val);
    
    int start, end, mid;
    start = 0;
    end = size-1;
    mid = (start+end)/2;
    
    while ( start < end) {
        if (a[mid] == val) {
         printf("%d is present at index %d.\n", val, mid+1);
         break;
      }  else if ( a[mid] < val) {
         start = mid + 1;
      } else {
         end = mid - 1;
         mid = (start + end)/2;
      }
    }
    
    return 0;
}
