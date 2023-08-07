//Implement Circular Queue using arrays that performs following operations. (a) INSERT (b) DELETE (c) DISPLAY
#include<stdio.h>
#include<stdlib.h>
#define max 5
int cq[max];
int front = -1, rear = -1;

void cqinsert() {
    int val;
    printf("Enter value to insert : ");
    scanf("%d",&val);
    if(rear == max-1 && front == 0) {
        printf("1.FAILURE : Queue is full\n");
    } else if (front - rear == 1) {
        printf("3.FAILURE : Queue is full\n");
    } else if (front == -1 && rear == -1) {
        rear = 0;
        front = 0;
        cq[rear] = val;
        printf("SUCCESS : Element %d is inserted\n",val);
    } else {
        if(front != 0 && rear == max-1){
            rear = 0;
        } else {
            rear = rear + 1;
        }
        cq[rear] = val;
        printf("SUCCESS : Element %d is inserted\n",val);
    }
}

void cqdelete() {
    if (front == -1) {
        printf("FAILURE : Queue is EMPTY\n");
    } else if (front == rear) {
        printf("SUCCESS : Element %d is removed\n",cq[front]);
        front = -1;
        rear = -1;
    } else if(front == max-1) {
        printf("SUCCESS : Element %d is removed\n",cq[front]);
        front = 0;
    } else {
        printf("SUCCESS : Element %d is removed\n",cq[front]);
        front = front+1;
    }
}

void mydisplay() {
    int i;
    if(rear >= front && front !=-1) {
        for(i=front;i<=rear;i++) {
            printf("%d\t",cq[i]);
        }
        printf("\n");
    }
    else if (rear < front) {
        for(i=front;i<max;i++) {
            printf("%d\t",cq[i]);
        }
        for(i=0;i<=rear;i++) {
            printf("%d\t",cq[i]);
        }
        printf("\n");
    } else {
        printf("FAILURE : Queue is EMPTY\n");
    }
}

int main() {
    int n;
    do {
    printf("1 : Insert\n");
    printf("2 : Delete\n");
    printf("3 : Display\n");
    printf("4 : Exit\n");
    printf("Enter operation to perform : ");
    scanf("%d",&n);

    switch(n){
        case 1:
        cqinsert();
        break;

        case 2:
        cqdelete();
        break;

        case 3:
        mydisplay();
        break;

        case 4:
        printf("PROGRAM TERMINATED");
        exit(0);
        break;

        default:
        printf("Invalid Input\n");
    }
    } while(n != 4);
    return 0;
}