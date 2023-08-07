//Simple Linked List
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
        printf("SUCCESS : New Node Added at First Position\n");
    } else {
        printf("FAILURE : Not able to create node due to insufficient space in memory\n");
    }
}

void ins_last() {
    if (number == 0) {
        printf("FAILURE : Use function : Insert at First Position\n");
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
            printf("SUCCESS : New Node Added at Last Position\n");
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
        printf("SUCCESS : Node deleted at first position\n");
    }
}

void del_last() {
    if(number == 1) {
        printf("FAILURE: Use Function : Delete node at First Position\n");
    } else {
        struct node *track, *previous;
        track = head;
        while( track->next != NULL) {
            previous = track;
            track = track->next;
        }
        previous->next = NULL;
        number--;
        printf("SUCCESS : Node deleted at last position\n");
        free(track);
    }
}

void ins_middle() {
    int pos, val, i;
    printf("Enter position : ");
    scanf("%d",&pos);
    if(pos == 1) {
        ins_first();
    } else if(pos == number + 1) {
        ins_last();
    } else if(pos > number) {
        printf("FAILURE : Node cannot be inserted\n");
    } else {
        printf("Enter value of Element : ");
        scanf("%d",&val);
        struct node *ptr;
        ptr = (struct node *)malloc(sizeof(struct node *));
            if(ptr != NULL) {
            struct node *track, *previous;
            track = head;
            for(i=1;i<pos;i++) {
                previous = track;
                track = track->next;
            }
            ptr->data = val;
            ptr->next = previous->next;
            previous->next = ptr;
            number++;
            printf("New node Inserted at position %d\n",val);
        } else {
            printf("FAILURE : Not able to create node due to insufficient space in memory\n");
        }
    }
}

void del_middle() {
    int pos,i;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos == 1) {
        del_first();
    } else if (pos == number) {
        del_last();
    } else if (pos > number) {
        printf("FAILURE: Node cannot be deleted\n");
    } else {
        struct node *track, *previous;
        track = head;
        for(i=1;i<pos;i++) {
            previous = track;
            track = track->next;
        }
        previous->next = track->next;
        number--;
        printf("SUCCESS : Node deleted at position %d\n",pos);
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
        printf("\n1: Insert New Node at First Position\n");
        printf("2: Insert New Node at Last Position\n");
        printf("3: Insert Node in the Middle\n");
        printf("4: Delete Node at First Position\n");
        printf("5: Delete Node at Last Position\n");
        printf("6: Delete Node in the Middle\n");
        printf("7: Search for an Element\n");
        printf("8: Display all Nodes\n");
        printf("9: Exit Program\n");
        printf("NUMBER OF NODES CURRENTLY PRESENT : %d\n",number);
        printf("Enter choice to perform : ");
        scanf("%d",&a);
        switch(a) {
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
            search();
            break;

            case 8:
            display();
            break;            

            case 9:
            printf("PROGRAM TERMINATED !!!\n");
            exit(0);
            break;


            default:
            printf("FAILURE : Invalid Choice\n");
        }
    } while(a != 9);
    return 0;
}