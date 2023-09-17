#if 0

//1.Node
typedef struct _node{
    int data;
    struct _node *next;
}Node,*pNode;

//2.Creat head node
pNode createHeadNode(){
    pNode head = (pNode)malloc(sizeof(Node));
    head -> data = 0;
    head ->next=NULL;
    return head;
}

//3.Insert
//3.1.1.Head insertion method
void insertNode_h(pNode *head,int data){
    //creat new node 
    pNode p = (pNode)malloc(sizeof(Node));
    //Handle memory allocation failure
    if(NULL=
    =p){
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

//3.1.2.Head insertion method--input
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

//3.2.1.Tail insertion method
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

//3.2.2.Tail insertion method--input
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

//4.Length of linked list
int listLen(pNode head){
    int len=1;
    if(head==NULL) return 0;
    while(head->next){
        len ++;
        head=head->next;
    }
    return len;
}

//5.Sort
//5.1.Bubble Sort
void popSort_d(pNode head){
    int len = listLen(head);
    int tmp;
    pNode head1;
    for(int i=0;i<len-1;i++){
        head1 = head;
        for(int j=0;j<len-i-1;j++){
            if(head1->data< head1->next->data){
                tmp = head1->data;
                head1->data = head1->next->data;
                head1->next->data = tmp;
            }
            head1=head1->next;
        }
    }
}

//5.2.Bubble Sort --pointer
void popSort_p(pNode *head){
    int len = listLen(*head);
    
    pNode pre,cursor,current;
    pNode phead ;
    phead->next=*head;
    for(int i=0;i<len-1;i++){
        pre=phead;
        current=phead->next;
        cursor=current->next;
        for(int j=0;j<len-i-1;j++){
            if((current->data > cursor->data)){
                pre->next = cursor;
                current->next=cursor->next;
                cursor->next=current; 
                
                pre=cursor;
                cursor=current->next;
                continue;
            }
            pre=pre->next;
            current=current->next;
            cursor=cursor->next;  
        }           
    }    
    *head=phead->next;
}

//6.Prirnt
void printList(pNode *head){
    pNode cursor = *head;
    while (cursor != NULL) {
        printf("%d ", cursor->data);
        cursor = cursor->next;
    }
    putchar('\n');
}

//7.Free
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


#endif