//Write a program to implement stack using linked list
#include<stdio.h>
#include<stdlib.h>
int number=0;

struct node{
    int data;
    struct node *next;
};
struct node *head;

void ins_first() {
    int val;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr != NULL) {
        printf("Enter data for element :");
        scanf("%d",&val);
        ptr->data = val;
        ptr->next = head;
        head = ptr;
        number++;
        printf("SUCCESS : New Element Added\n");
    } else {
        printf("FAILURE : Not able to create node due to insufficient space in memory\n");
    }
}

void ins_last() {
    if (number == 0) {
        ins_first();
    } else {
        struct node *ptr, *track;
        ptr = (struct node *)malloc(sizeof(struct node *));
        if(ptr != NULL) {
            int val;
            printf("Enter data for element : ");
            scanf("%d",&val);
            track = head;
            while(track->next != NULL ) {
                track = track->next;
            }
            track->next = ptr;
            ptr->data =val;
            ptr->next = NULL;
            number++;
            printf("SUCCESS : New Element Added\n");
        } else {
            printf("FAILURE : Not able to create node due to insufficient space in memory\n");
        }
    }
}

void del_first() {
    if(head == NULL) {
        printf("FAILURE: Linked List is Empty\n");
    } else {
        struct node *ptr;
        ptr = head;
        head = ptr->next;
        number--;
        free(ptr);
        printf("SUCCESS : Node Deleted\n");
    }
}

void del_last() {
    if(number == 1) {
        del_first();
    } else {
        struct node *track, *previous;
        track = head;
        while( track->next != NULL) {
            previous = track;
            track = track->next;
        }
        previous->next = NULL;
        number--;
        printf("SUCCESS : Node Deleted\n");
        free(track);
    }
}

void display() {
    int flag=0;
    struct node *ptr;
    ptr = head;
    while(ptr != NULL) {
        flag++;
        printf("Node %d : Value of element is : %d\n",flag, ptr->data);
        ptr = ptr->next;
    }
    if(flag == 0) {
        printf("FAILURE : Linked List in Empty\n");
    }
}

void search() {
    int flag=0, val, i=1;
    printf("Enter element to search : ");
    scanf("%d",&val);
    struct node *track;
    track = head;
    while(track != NULL) {
        if(track->data == val) {
            printf("%d is present at position %d\n",val,i);
            flag++;
        }
        i++;
        track = track->next;
    }
    if(flag == 0) {
        printf("%d is NOT AVAILABLE in the Linked List\n",val);
    }
}

int main() {
    int a;
    do{
        printf("1: Insert New Element\n");
        printf("2: Delete Element\n");
        printf("3: Search for an Element\n");
        printf("4: Display all Nodes\n");
        printf("5: Exit Program\n");
        printf("NUMBER OF NODES CURRENTLY PRESENT : %d\n",number);
        printf("Enter choice to perform : ");
        scanf("%d",&a);
        switch(a) {
            case 1:
            ins_last();
            break;

            case 2:
            del_last();
            break;

            case 3:
            search();
            break;

            case 4:
            display();
            break;            

            case 5:
            printf("PROGRAM TERMINATED !!!\n");
            exit(0);
            break;


            default:
            printf("FAILURE : Invalid Choice\n");
        }
    } while(a != 9);
    return 0;
}