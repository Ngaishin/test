#include "Head.h"

#define x 10
#define y 20
#define nu 15

#define F_OPEN_VERIFY(f)\
do\
{\
    if(NULL==f){\
        printf("Open file Error\n");\
        exit(-1);\
    }\
    printf("File open success\n");\
}\
while(0)\


//write
int main1(){

    FILE *fp = fopen("D:/C/CODE/Pirmary/Hello.txt","w");

    F_OPEN_VERIFY(fp);
    printf("File open success\n");
    char ch;
    for(ch=' ';ch<='~';ch++){
        putchar(fputc(ch,fp));
        //fputc(ch,fp);
    }
    fclose(fp);
    //system("pause");
    return 0;
}

//read
int main(){

    FILE *fp = fopen("D:/C/CODE/Pirmary/Hello.txt","r");

    F_OPEN_VERIFY(fp);

    char ch;
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    //system("pause");
    return 0;
}