#include "Head.h"

#define x 10
#define y 20
#define nu 15
//
typedef struct _stu{
    char name[13];
    int age;
}Stu;

typedef union _dtu{
    char name[9];
    short score;
    int age;
}Dtu;

int main(){

    Stu s1={'A',10};
    Dtu d1={.name="G",.score=95};
    printf("s1.name =%#x ,s1.score=%#x\n",&s1.name,&s1.age);
    printf("d1.name =%#x ,d1.score=%#x\n",&d1.name,&d1.score);
    printf("\nsizeof : s1= %d\n",sizeof(Stu));
    printf("\nsizeof : d1= %d\n",sizeof(Dtu));
    printf("d1.name= %s,d1.score=%#x,d1.age=%#x\n",d1.name,d1.score);
    //system("pause");
    return 0;
}