#include "Head.h"


int main(){


    

    pNode head = NULL;
    insertNode_h_input(&head);
    int len=listLen(head);
    printf("Length: %d\n",len);
    printList(&head);
    printf("Sort ...\n");
    popSort_p(&head);
    printf("Sort complete\n");
    printList(&head);


    printf("Data sort:\n");
    popSort_d(head);
    printList(&head);

    freeList(&head);
    

    //system("pause");
    return 0;
}