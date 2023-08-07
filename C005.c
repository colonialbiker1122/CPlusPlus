// Implement QUEUE using arrays that performs following operations:(a) INSERT (b) DELETE (c) DISPLAY
#include<stdio.h>
#include<stdlib.h>
#define max 20
int front=-1,rear=-1;
int queue[max];

void qinsert() {
    int a;
    printf("Enter value to insert : ");
    scanf("%d",&a);
    if(rear == max-1) {
        printf("FAILURE : Queue is Full\n");
    } else if(front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        queue[rear] = a; 
        printf("SUCCESS : Value %d is inserted at queue[%d]\n",a,rear);
    } else {
        rear = rear + 1;
        queue[rear] = a;
        printf("SUCCESS : Value %d is inserted at queue[%d]\n",a,rear);
    }
}

void qdelete() {
    if(front > rear) {
        printf("FAILURE : Queue is Empty\n");
    } else if (front == -1 && rear == -1) {
        printf("FAILURE : Queue is Empty\n");
    } else {
        printf("SUCCESS : Value %d is deleted at queue[%d]\n",queue[front],front);
        front++;
    }
}

void qdisplay() {
    int i;
    if (front == -1 && rear == -1) {
        printf("FAILURE : Queue is Empty\n");
    } else {
        for(i=front; i<=rear;i++) {
            printf("Value at queue[%d] is : %d\n",i,queue[i]);
        }
    }
}

int main() {
    int n;
    do{
        printf("1 : Insert\n");
        printf("2 : Delete\n");
        printf("3 : Display\n");
        printf("4 : Exit\n");
        printf("Enter the operation to perform : ");
        scanf("%d",&n);

        switch(n) {
            case 1:
            qinsert();
            break;
            
            case 2:
            qdelete();
            break;

            case 3:
            qdisplay();
            break;

            case 4:
            exit(0);

            default:
            printf("Wrong Input");
        }
    } while(n != 4);
    return 0;
}