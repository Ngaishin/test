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
            if(head1->data> head1->next->data){
                tmp = head1->data;
                head1->data = head1->next->data;
                head1->next->data = tmp;
            }
            head1=head1->next;
        }
    }
}

//POP sort pointer
void popSort_p(pNode head){
    int len = listLen(head);
    // if(len<=1) return;
    // else if(len==2&&head->data>head->next->data){
    //     pNode tmp = head->next;
    //     head->next=head;
    //     head->next=tmp;
    //     return;
    // }
    // else if (len==2&&head->next->data>=head->data)
    // {
    //     return;
    // }
    
    pNode pre,cursor,current,tmp;
    pre=head;
    for(int i=0;i<len-1;i++){
        current=head;
        for(int j=0;j<len-i-1;j++){
            if((current->data > current->next->data)){
                cursor=current->next;
                pre->next=cursor; 
                current->next=cursor->next;
                cursor->next=current; 

                tmp=current;
                current=cursor;
                cursor=tmp;   
            }
            if(0==j){
                head=current;
            }
            pre=current;
            current=current->next;
            
        }           
    }    
}