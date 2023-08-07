//Write a Program to implement operations on Double linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
} *head;

void ins_first() {
    int val;
    struct node *ptr, *track;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr != NULL) {
        printf("Enter value of element : ");
        scanf("%d",&val);
        ptr->data = val;
        if(head == NULL) {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        } else {
            ptr->next = head;
            ptr->prev = NULL;
            head->prev = ptr;
            head = ptr;
        }
        printf("SUCCESS: Node inserted at First position\n");
    } else {
        printf("FAILURE: Memory Underflow\n");
    }
}

void ins_last() {
    int val;
    struct node *ptr, *track;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr != NULL) {
        if(head == NULL) {
            ins_first();
        } else {
            printf("Enter value of element : ");
            scanf("%d",&val);
            track = head;
            while(track->next != NULL) {
                track = track->next;
            }
            ptr->next = NULL;
            ptr->data = val;
            track->next = ptr;
            ptr->prev = track;
            printf("SUCCESS: New node inserted at last position\n");
        }
    } else {
        printf("FAILURE: Memory Underflow\n");
    }
}

void del_first() {
    if(head == NULL) {
        printf("FAILURE: Linked List is Empty\n");
    } else if(head->next == NULL) {
        head = NULL;
        free(head);
        printf("SUCCESS: Node deleted at first position\n");
    } else {
        struct node *ptr;
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("SUCCESS : Node deleted at first position\n");
    }
}

void del_last() {
    if(head == NULL) {
        printf("FAILURE: Empty linked list\n");
    }
    else {
        struct node *ptr, *track;
        ptr = head;
        if(ptr->next == NULL) {
            del_first();
        } else {
            while(ptr->next != NULL) {
                ptr = ptr->next;
            }
            track = ptr->prev;
            track->next = NULL;
            free(ptr);
            printf("SUCCESS: Node deleted at last position\n");
        }
    }
}

void ins_middle() {
    int pos,i, val;
    struct node *track, *ptr;
    if(head == NULL) {
        ins_first();
    } else {
        printf("Enter position at which node must be inserted : ");
        scanf("%d",&pos);
        track = head;
        for(i=0; track != NULL; i++) {
            track = track->next;
        }
        if(pos == 1) {
            ins_first();
        } else if(pos > i+1) {
            printf("FAILURE: Invalid position\n");
        } else if(pos == i+1) {
            ins_last();
        } else {
            ptr = (struct node *)malloc(sizeof(struct node *));
            if(ptr != NULL) {
                printf("Enter value of element : ");
                scanf("%d",&val);
                ptr->data = val;
                track = head;
                for(i=2; i<pos; i++) {
                    track = track->next;
                }
                ptr->next = track->next;
                ptr->prev = track;
                ptr->data = val;
                track->next = ptr; 
                track = track->next;
                track = track->next;
                track->prev = ptr;
                printf("SUCCESS: New Node inserted at position %d\n",pos);
            } else {
                printf("FAILURE: Memory overflow\n");
            }
        }
    }
}

void del_middle() {
    int pos, i;
    struct node *track, *tracknext, *trackprev;
    if(head == NULL) {
        printf("FAILURE: Linked List is empty\n");
    } else {
        printf("Enter position at which node must be deleted : ");
        scanf("%d",&pos);
        track = head;
        for(i=0; track != NULL; i++) {
            track = track->next;
        }
        if(pos == 1) {
            del_first();
        } else if(pos > i) {
            printf("FAILURE: Invalid position\n");
        } else if(pos == i) {
            del_last();
        } else {
            track = head;
            for(i=1; i<pos; i++) {
                track = track->next;
            }
            trackprev = track->prev;
            tracknext = track->next;
            trackprev->next = tracknext;
            tracknext->prev = trackprev;
            free(track);
            printf("SUCCESS: New Node deleted at position %d\n",pos);
        }
    }
}

void display() {
    int i;
    struct node *track;
    if(head == NULL) {
        printf("Linked List is Empty\n");
    } else {
        track = head;
        while(track != NULL) {
            printf("Value of element : %d\n",track->data);
            track = track->next;
        }
    }
}

int main() {
    int op;
    do{
        printf("\n1: Insert at First position\n");
        printf("2: Insert at Last position\n");
        printf("3: Insert in the middle\n");
        printf("4: Delete at First position\n");
        printf("5: Delete at Last position\n");
        printf("6: Delete in the middle\n");
        printf("7: Display all nodes from begining to end\n");
        printf("8: Exit program\n");
        printf("Enter operation to perform : ");
        scanf("%d", &op);

        switch(op) {
            case 1:
            ins_first();
            break;

            case 2:
            ins_last();
            break;

            case 3:
            ins_middle();
            break;

            case 4:
            del_first();
            break;

            case 5:
            del_last();
            break;

            case 6:
            del_middle();
            break;

            case 7:
            display();
            break;

            case 8:
            printf("Program Terminated SUCCESSFULLY!!\n");
            exit(0);
            break;

            default:
            printf("Invalid Input\n");
        }
    } while(op != 8);
    return 0;
}