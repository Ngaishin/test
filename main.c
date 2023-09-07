#include "Head.h"

#define x 10
#define y 20
#define nu 15





int main(){

    pNode head=NULL;
    
    insertNode_h_input(&head);
    
    printList(&head);

    freeList(&head);



    //system("pause");
    return 0;
}