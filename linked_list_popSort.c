#include "Head.h"

//length of list
int listLen(pNode head){
    int len=1;
    if(head==NULL) return 0;
    while(head->next){
        len ++;
        head=head->next;
    }
    return len;
}

//POP sort data
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

//POP sort pointer
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
    return;
}