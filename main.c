#include "Head.h"

#define x 10
#define y 20
#define nu 15

void fun1(char *p){
    p=(char *)malloc(10*sizeof(char));
    if(NULL==p){
        printf("malloc error!\n");
        exit(0);
    }
    memset(p,65,10);
    printf("p   =%s\n",p);
    free(p);
    p=NULL;
}


int main(){
    char *p;
    fun1(p);
    printf("p   =%d\n",p);

    

    //system("pause");
    return 0;
}