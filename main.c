#include "Head.h"

#define x 10
#define y 20
#define nu 15



int main(){

    //Character vArr[]={{"zhangsan",0},{"lisi",0},{"wangwu",0},{"laoliu",0},{"saqi",0}};
    Character vArr[]={{"1",0},{"2",0},{"3",0},{"4",0},{"5",0},
                        {"6",0},{"7",0},{"8",0},{"9",0},{"0",0}};

    vote(vArr,sizeof(vArr)/sizeof(vArr[0]),12);

    //system("pause");
    return 0;
}