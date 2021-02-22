#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void printList(struct Node* n){
    while (n!=NULL)
    {
        printf("%d",n->data);
        n=n->next;
    }
}

void assignNode(struct Node* node, struct Node* prev_node, int data, struct Node* next_node){
    node->data = data;
    node->next = next_node;
    node->prev = prev_node;
}
int main(){

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    //allocate 3 nodes in heap.

    head = (struct Node*)malloc(sizeof(struct Node*));
    second = (struct Node*)malloc(sizeof(struct Node*));
    third = (struct Node*)malloc(sizeof(struct Node*));

    assignNode(head,NULL,1,second);
    assignNode(second,head,2,third);
    assignNode(third,second,3,NULL);

    printList(head);
    return 0;
}