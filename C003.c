//STACK OPERATIONS
#include<stdio.h>
#include<stdlib.h>
#define max 5
int pt = -1;
int stack[max];

void push() {
    if(pt == max-1) {
        printf("FAILURE : Stack is full");
    } else {
        int a;
        printf("Enter the value of element : ");
        scanf("%d",&a);
        pt = pt+1;
        stack[pt] = a;
        printf("SUCCESS : Element %d is Pushed",stack[pt]);
    }
}

void pop() {
    if (pt == -1) {
        printf("FAILURE : Stack is Empty");
    } else {
        printf("SUCCESS : Element %d is popped",stack[pt]);
        pt = pt-1;
    }
}

void peep() {
    int pos;
    printf("Enter position of element from top (Starts from 0) : ");
    scanf("%d",&pos);
    if (pt-pos >= 0) {
        printf("Value of element is : %d",stack[pt-pos]);
    } else if ( pt == -1) {
        printf("FAILURE : Stack is Empty");
    } else {
        printf("FAILURE : Invalid Position");
    }
}

void change() {
    int pos,v;
    printf("Enter position of element from top (Starts from 0) : ");
    scanf("%d",&pos);
    printf("Enter Updated Value of Element : ");
    scanf("%d",&v);
    if (pt-pos >= 0) {
        stack[pt-pos] = v;
        printf("SUCCESS : Value Updated to : %d",stack[pt-pos]);
    } else if ( pt == -1) {
        printf("FAILURE : Stack is Empty");
    } else {
        printf("FAILURE : Invalid Position");
    }
}

void display() {
    int i;
    if(pt != -1) {
    for(i=0;i<=pt;i++) {
        printf("Value of element at position %d : %d\n",i,stack[i]);
    }
    } else {
        printf("FAILURE : Stack is Empty");
    }
}

int main() {
    int a;
    do{
    printf("\n");
    printf("1 - PUSH\n");
    printf("2 - POP\n");
    printf("3 - PEEP\n");
    printf("4 - CHANGE\n");
    printf("5 - DISPLAY\n");
    printf("6 - EXIT\n");
    printf("Enter operation to perform : ");
    scanf("%d",&a);
    
    switch(a) {
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        peep();
        break;

        case 4:
        change();
        break;
        
        case 5:
        display();
        break;

        case 6:
        printf("Program Terminated!");
        exit(0);
        break;

        default:
        printf("Wrong Input !!");
        break;
    }
    } while(a<7);
    return 0;
}