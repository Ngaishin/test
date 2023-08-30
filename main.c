#include "Head.h"
#include <stdlib.h>
#include <time.h>

#define nu 20
#define sch 95

int main(){

    int arr[nu];
    for(int i=0;i<nu;i++){
        // srand((unsigned)time(NULL));
        // arr[i]=rand()%100+1;
        arr[i]=rand()%100+1;
        printf("%-4d",arr[i]);
    } 
    putchar(10);

    selSort(arr,nu);
    binSearch(arr,nu,sch);

    putchar(10);

    //system("pause");
    return 0;
}