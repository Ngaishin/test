#include "Head.h"
void alloc(int *p,int quantity,char type){
    //1.alloc
    switch (type)
    {
    case 'm':p=(int *)malloc(quantity*sizeof(int));
        break;
    case 'c':p=(int *)calloc(quantity,sizeof(int));
        break;
    case 'r':p=(int *)realloc(p,quantity*sizeof(int));
        break;
    default:
        printf("No such type!");
        break;
    }
    //2.if the pointer is NULL
    if(NULL==p){
        printf("No enough memory!\n");
        exit(0);
    }
    //3.use
    int i;
    for(i=0;i<quantity;i++)
    {
        p[i]=i;
    }

    for(i=0;i<quantity;i++)
    {
        printf("%-2d",p[i]%10);
    }
    putchar(10);
    //who alloc who free
    //4.free the memory
    //free(p);
    //5.set the pointer to NULL
    //p=NULL;
}