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

//Head insertion method
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
        printf("%d ", cursor->data);
        cursor = cursor->next;
    }
    putchar('\n');
}

//free list
void freeList(pNode *head) {
    if (*head == NULL) {
        printf("The List is empty\n");
        return;
    }
    pNode current = *head;
    pNode next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
#if 0
//creatlist tail_insert
pNode createList_t(){
    pNode head = (pNode)malloc(sizeof(Node));
    if(NULL==head){
        exit(-1);
    }
    
    pNode temp=head,cur;
    int nodeData;

    scanf("%d",&nodeData);
    while(nodeData){
        cur = (pNode)malloc(sizeof(Node));
        if(NULL==cur)
            exit(-1);
        cur->data=nodeData;
        temp->next=cur;
        temp=cur;
        scanf("%d",&nodeData);
    }
    temp->next=NULL;

    return head;
}
#endif

//insert node at the head
void insertNode_h_input(pNode *head){
    //creat new node 
    pNode p;
    int nodeData;
    scanf("%d",&nodeData);
    while(nodeData){
        p = (pNode)malloc(sizeof(Node));
        //Handle memory allocation failure
        if(NULL==p){
            printf("Memory allocation failure\n");
            exit(0);
        }
        //Determine wherher the head node is NULL
        if(NULL==*head){
            *head=p;
            p->data=nodeData;
            p->next=NULL;
        }
        else{
            p->data=nodeData;
            p->next=*head;
            *head=p;
        }
        scanf("%d",&nodeData);
    }
    printf("Input complete\n");
}
    

//insert node at the tail by inputting
void insertNode_t_input(pNode *head){
    //creat new node
    pNode p;
    int nodeData;
    //input num
    scanf("%d",&nodeData);
    while(nodeData){
        p = (pNode)malloc(sizeof(Node));
        //Handle memory allocation failure;
        if(NULL==p){
            printf("Memory allocation failure\n");
            exit(-1);
        }
        p->data = nodeData;
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
        scanf("%d",&nodeData);
    }
    printf("Input complete\n");

}

//creat head node
pNode createHeadNode(){
    pNode head = (pNode)malloc(sizeof(Node));
    head -> data = 0;
    head ->next=NULL;
    return head;
}
