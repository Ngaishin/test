#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//number of daffodils
void flower(int n, int m);
void flower_input();

//Switch
void Switch();

//input account
void doWhile();

//buy chicken
void buyChicken();

//print rhombus
void prnRhombus(int);

//find number
void findNum(int* arr, int arrLength, char numType);

//rand arrary
void initRandArray(int *arr,int arrLen);

//print array
void printArray(int *arr,int arrLen);

//selection sort
void selSort(int *arr,int arrLen);

//Binary search
void binSearch(int *arr,int arrLen,int sch);

//Three stars appear
void tChess(int sidelength,int quantity);

//test2
void test2();

//alloc
void alloc(int *p,int quantity,char type);

//votes
typedef struct _character{
    char name[20];
    int votes;
}Character;
void vote(Character *vArr,int members,int votes);

//node_list
typedef struct _node{
    int data;
    struct _node *next;
}Node,*pNode;
void insertNode_h(pNode *head,int data);
void insertNode_t(pNode *head,int data);
void printList(pNode *head);
void freeList(pNode *head);