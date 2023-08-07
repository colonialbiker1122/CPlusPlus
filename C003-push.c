#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int pt = -1;
void push(int fa) {
    if(pt == max-1) {
        printf("Stack is full\n");
    } else {
        pt = pt + 1;
        stack[pt] = fa;
    }

}


int main() {
    int i;
    while (pt < max-1){
    int a;
    printf("Enter element to Push");
    scanf("%d",&a);
    push(a);
    }
    for(i=0;i<max;i++){
    printf("Value of stack[%d] : %d\n",i,stack[i]);
    }
    return 0;
}