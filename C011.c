//Write program for Inorder, Preorder and Postorder Traversal of Binary Search Tree
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *rptr;
    struct node *lptr;
} *root;

void preorder_traversal(struct node *track) {
    printf("%d\t", track->data);
    if( track->lptr != NULL ) {
        preorder_traversal(track->lptr);
    }
    if ( track->rptr != NULL ) {
        preorder_traversal(track->rptr);
    }
}

void postorder_traversal(struct node *track) {
    if( track->lptr != NULL ) {
        postorder_traversal(track->lptr);
    }
    if ( track->rptr != NULL ) {
        postorder_traversal(track->rptr);
    }
    printf("%d\t", track->data);
}

void inorder_traversal(struct node *track) {
    if( track->lptr != NULL ) {
        inorder_traversal(track->lptr);
    }
    printf("%d\t", track->data);
    if ( track->rptr != NULL ) {
        inorder_traversal(track->rptr);
    }
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
    
    printf("Tree is EMPTY. Please enter a number to insert in Root Node of Binary Search Tree : ");
    scanf("%d",&val);
    root = insert_search_node(root, val);
    
    do{
        printf("\n1: Insert in Binary Search Tree\n");
        printf("2: Search in Binary Search Tree\n");
        printf("3: Exit\n");
        printf("4: Inorder Traversal\n");
        printf("5: Preorder Traversal\n");
        printf("6: Postorder Traversal\n");
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

            case 4:
            inorder_traversal(root);
            break;
            
            case 5:
            preorder_traversal(root);
            break;
            
            case 6:
            postorder_traversal(root);
            break;
            
            default:
            printf("FAILURE: Invalid Input Command\n");
        }
    } while(n != 3);
    
    return 0;
}