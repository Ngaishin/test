#include "Head.h"

//selection sort
void selSort(int *arr,int arrLen)
{
    int i,j,temp,minIndex;
    for(i=0;i<arrLen-1;i++){
        minIndex=i;
        for(j=i+1;j<arrLen;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        if(arr[i]!=arr[minIndex]){
            temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }   
    }
    for(i=0;i<arrLen;i++){
        printf("%-4d",arr[i]);
    }
    putchar(10);
}

//Binary search
void binSearch(int *arr,int arrLen,int sch){
    int left=0;
    int right=arrLen-1;
    int mid;
    while(left <=right){
        mid=(right-left)/2+left; 
        if(sch==arr[mid]){
            printf("The Index of '%d' is %d\n",sch,mid);
            return;
        }    
        else if(sch>arr[mid]){
            left=mid+1;  
        }    
        else if(sch<arr[mid]){
            right=mid-1;   
        }
    } 
        printf("No such Number!\n");
}