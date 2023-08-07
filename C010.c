//Write a simple program to showcase the use of Insertion and deletion in Binary Tree
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rptr;
    struct node *lptr;
} *root;

struct node * insert_search_node (struct node *track, int val) {
    struct node *newnode;
    if(track == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        printf("Root node inserted\n");
    } else if (val > track->data && track->rptr == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->rptr = newnode;
        printf("Leaf node inserted at right\n");
    } else if (val > track->data && track->rptr != NULL) {
        insert_search_node (track->rptr, val);
    } else if (val < track->data && track->lptr == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->lptr = newnode;
        printf("Leaf node inserted at left\n");
    } else if (val < track->data && track->lptr != NULL) {
        insert_search_node (track->lptr, val);
    }
    return newnode;
}

int search_node (struct node *track, int val) {
    //returns 1 if found else returns 0

    if(track == NULL) {
        return 0;
    } else if (val == track->data) {
        return 1;
    } else if ( val > track->data ) {
        search_node(track->rptr, val);
    } else if ( val < track->data ) {
        search_node(track->lptr, val);
    }
}

int main() {
    struct node *track;
    int val, n, flag;
    
    printf("Enter a number to insert in Root Node of Binary Search Tree : ");
    scanf("%d",&val);
    root = insert_search_node(root, val);
    
    do{
        printf("\n1: Insert in Binary Search Tree\n");
        printf("2: Search in Binary Search Tree\n");
        printf("3: Exit\n");
        printf("Enter Code to execute: ");
        scanf("%d",&n);
        switch(n) {
            case 1:
            printf("Enter a number to insert in a Binary Search Tree : ");
            scanf("%d",&val);
            track = insert_search_node(root, val);
            break;
            
            case 2:
            printf("Enter value of element to search : ");
            scanf("%d",&val);
            flag = search_node(root, val);
            if(flag == 0) {
                printf("Element does not exist !!!\n");
            } else {
                printf("Element exists !!!\n");
            }
            break;
            
            case 3:
            printf("Program Terminated successfully !!!");
            exit(0);
            break;
            
            default:
            printf("FAILURE: Invalid Input Command\n");
        }
    } while(n != 3);
    
    return 0;
}
//---------------------------------------------------------------------------------------------
/*
//Write a simple program to showcase the use of Insertion and deletion in Binary Tree
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rptr;
    struct node *lptr;
} *root;

struct node * insert_node(struct node *track, int val) {
    struct node *newnode;
    if( track == NULL ) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        printf("Root added successfully at First Position\n");
    } else if ( val > track->data  ) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->rptr = newnode;
        printf("Root added successfully at right Position\n");
    } else if ( val < track->data  ) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->lptr = newnode;
        printf("Root added successfully at left Position\n");
    }
    return newnode;
}

struct node * insert_search_node (struct node *track, int val) {
    struct node *newnode;
    if(track == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        printf("Root node inserted\n");
    } else if (val > track->data && track->rptr == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->rptr = newnode;
        printf("Root node inserted at right\n");
    } else if (val > track->data && track->rptr != NULL) {
        insert_search_node (track->rptr, val);
    } else if (val < track->data && track->lptr == NULL) {
        newnode = (struct node *)malloc(sizeof(struct node *));
        newnode->lptr = NULL;
        newnode->rptr = NULL;
        newnode->data = val;
        track->lptr = newnode;
        printf("Root node inserted at left\n");
    } else if (val < track->data && track->lptr != NULL) {
        insert_search_node (track->lptr, val);
    }
    return newnode;
}

int search_node (struct node *track, int val) {
    //returns 1 if found else returns 0

    if(track == NULL) {
        return 0;
    } else if (val == track->data) {
        return 1;
    } else if ( val > track->data ) {
        search_node(track->rptr, val);
    } else if ( val < track->data ) {
        search_node(track->lptr, val);
    }
}

int main() {
    struct node *track1, *track2, *track3;
    int i, flag;

    printf("Creating a new node ...\n");
    root = insert_search_node(root, 25);
    printf("%x\n", root);
    printf("%x\n", root->lptr);
    printf("%x\n", root->rptr);
    printf("%d\n", root->data);
    
    track1 = insert_search_node(root, 30);
    printf("%x\n", root);
    printf("%x\n", root->lptr);
    printf("%x\n", root->rptr);
    printf("%d\n", root->data);

    printf("%x\n", track1);
    printf("%x\n", track1->lptr);
    printf("%x\n", track1->rptr);
    printf("%d\n", track1->data);

    track2 = insert_search_node(root, 20);
    printf("%x\n", root);
    printf("%x\n", root->lptr);
    printf("%x\n", root->rptr);
    printf("%d\n", root->data);

    printf("%x\n", track2);
    printf("%x\n", track2->lptr);
    printf("%x\n", track2->rptr);
    printf("%d\n", track2->data);
    
    track3 = insert_search_node(root, 10);
    printf("%x\n", root);
    printf("%x\n", root->lptr);
    printf("%x\n", root->rptr);
    printf("%d\n", root->data);

    printf("%x\n", track3);
    printf("%x\n", track3->lptr);
    printf("%x\n", track3->rptr);
    printf("%d\n", track3->data);

    flag = search_node(root, 30);
    printf("%d",flag);
    return 0;
}
*/
