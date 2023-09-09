#include "Head.h"

void test2(){
    //creat a arr
    int arr[10] = {1,3,4,5,6,2,7,8,9,10};
    int *p = arr;
    int *q = &arr[0];
    printf("p            = %p\n",p);
    printf("q            = %p\n",q);
    printf("arr          = %p\n",arr);
    printf("arr+1        = %p\n",arr+1);
    printf("*arr+1       = %p\n",*arr+1);
    printf("*(arr+1)     = %p\n",*(arr+1));
    printf("&arr[0]      = %p\n",&arr[0]);
    printf("&arr[0]+1    = %p\n",&arr[0]+1);
    printf("*(&arr[0])+1 = %p\n",*(&arr[0])+1);
    printf("*(&arr[0]+1) = %p\n",*(&arr[0]+1));
    putchar('\n');
    printf("arr = %#p\n",arr);

    
}