#include "Head.h"

#define x 10
#define y 20
#define nu 15





int main(){

    pNode head=NULL;

    for(int i=0;i<30;i++){
        if(i%2==0){
            insertNode_t(&head,i);
        }
        // else{
        //     insertNode_h(&head,i);
        // }
    }
    
    printList(&head);

    freeList(&head);

    //system("pause");
    return 0;
}