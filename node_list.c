#include "Head.h"

//node
// typedef struct _node{
//     int data;
//     struct _node *next;
// }Node,*pNode;

//creat list and head node
#if 0
pNode head=NULL;
#endif

//insert node at the head
void insertNode_h(pNode *head,int data){
    //creat new node 
    pNode p = (pNode)malloc(sizeof(Node));
    //Handle memory allocation failure
    if(NULL==p){
        printf("Memory allocation failure\n");
        exit(0);
    }
    //Determine wherher the head node is NULL
    if(NULL==*head){
        *head=p;
        p->data=data;
        p->next=NULL;
    }
    else{
        p->data=data;
        p->next=*head;
        *head=p;
    }
    
}

//insert node at the tail
void insertNode_t(pNode *head,int data){
    //creat new node
    pNode p = (pNode)malloc(sizeof(Node));
    //Handle memory allocation failure;
    if(NULL==p){
        printf("Memory allocation failure\n");
        exit(0);
    }
    p->data = data;
    p->next = NULL;
    
    //Determine whether the head node is NULL
    if(NULL==*head){
        *head = p;
    }    
    else{
        pNode cursor=*head;
        while(cursor->next){
            cursor=cursor->next;
        }
        cursor->next = p;
    }
}

//print list
void printList(pNode *head){
    pNode cursor = *head;
    while (cursor != NULL) {
        printf("%-3d", cursor->data);
        cursor = cursor->next;
    }
    putchar('\n');
}

//free list
void freeList(pNode *head) {
    if (*head == NULL) {
        printf("h List is empty\n");
        return;
    }
    pNode current = *head;
    pNode next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    printf("head = %#x\n",next->data);

}