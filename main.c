#include "Head.h"

#define x 10
#define y 20
#define nu 15





int main(){

    // Create a head node
    pNode head=NULL;
    //head = createHeadNode();//in heap
    // Insert a node into the head
    insertNode_h_input(&head);
    
    // Print the list
    printList(&head);

    // Free the list
    freeList(&head);



    //system("pause");
    return 0;
}