#include "Head.h"

//Three pieces of chess
void tChess(int sidelength,int quantity){

    //creat a chessboard and chessman
    int rows,columns,chessman;
    char cboard[sidelength][sidelength];
    int count=0;
    srand(time(NULL));  

    //chessboard init
    for(rows=0;rows<sidelength;rows++){
        for(columns=0;columns<sidelength;columns++){
            cboard[rows][columns]=45;
        }
    }
    
    //quantity of chessman
    while(quantity){
        rows=rand()%sidelength;
        columns=rand()%sidelength;
        if(cboard[rows][columns]!=79){
            cboard[rows][columns]=79;
            quantity--;
        }           
    }

    //print board and pieces
    for(rows=0;rows<sidelength;rows++){
        for(columns=0;columns<sidelength;columns++){
            
            printf("%3c",cboard[rows][columns]);
        }
        putchar(10);
    }
    
    //Check if there are three consecutive pieces
    //rows scan
    for(rows=0;rows<sidelength;rows++){
        count=0; 
        for(columns=0;columns<sidelength;columns++){
            if(79==cboard[rows][columns]){
                count++;
                if(3==count){
                    goto Found;
                }     
            }  
            else
                count=0; 
        }
        //columns scan
        count=0; 
        for(columns=0;columns<sidelength;columns++){
            if(79==cboard[columns][rows]){
                count++;
                if(3==count){
                   goto Found;
                }  
            }
            else
                count=0;
        }
    }
    printf("No appear");
    return ;
Found:
    printf("Three stars appear");
    
}