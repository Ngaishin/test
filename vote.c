#include "Head.h"

//vote
//require:vote one in three
//creat struct character have name and votes
//creat character array
//input name ,and then votes++
//sort name by votes
//print namne who winned

//struct
// typedef struct _character{
//     char name[20];
//     int votes;
// }Character;

//votes init
//Character vArr[3]={{"zhangsan",0},{"lisi",0},{"wangwu",0}};

//vote
void vote(Character *vArr,int members,int votes){
    int count=votes;
    char name[20];
    while(votes--){
        printf("Input name: ");
        scanf("%19s",name);
        for(int i=0;i<members;i++){
            if(!strcmp(vArr[i].name,name)){
                vArr[i].votes++;
                count--;
            }
        }
    }            
    //max votes
    int idx=0;
    int status;
    for(int i=0;i<members;i++){
        if(vArr[i].votes>vArr[idx].votes){
            idx=i;
            status=0;
        }
        else if(vArr[i].votes==vArr[idx].votes&&i!=idx){
            status=1;
        }
    }
    
    switch (status)
    {
    case 0:printf("winner is %s\nVotes are %d\nAbandoned votes are %d\n",vArr[idx].name,vArr[idx].votes,count);break;
    default:printf("No candidate selected!\nAbandoned votes are %d\n",count);break;   
    }
}

