#include "Head.h"

//Three pieces of chess
void tChess(int sidelength,int quantity){

    //creat a chessboard and chessman
    int rows,columns,chessman;
    int cboard[sidelength][sidelength];
    int count=0;
    srand(time(NULL));  

    int status=0;

    //chessboard init
    for(rows=0;rows<sidelength;rows++){
        for(columns=0;columns<sidelength;columns++){
            cboard[rows][columns]=1;
        }
    }
    
    //quantity of chessman
    while(quantity){
        rows=rand()%sidelength;
        columns=rand()%sidelength;
        if(cboard[rows][columns]&1){
            cboard[rows][columns]=0;
            quantity--;
        }           
    }

    //print board and pieces
    for(rows=0;rows<sidelength;rows++){
        for(columns=0;columns<sidelength;columns++){
            
            printf("%3d",cboard[rows][columns]);
        }
        putchar(10);
    }
    
    //Check if there are three consecutive pieces
    //rows scan
    for(rows=0;rows<sidelength;rows++){
        count=0; 
        for(columns=0;columns<sidelength;columns++){
            if(!(1&cboard[rows][columns])){
                count++;
                if(3==count){
                    status=1;
                    columns-=2;
                    goto Found;
                }     
            }  
            else
                count=0; 
        }
        //columns scan
        count=0; 
        for(columns=0;columns<sidelength;columns++){
            if(!(1&cboard[columns][rows])){
                count++;
                if(3==count){
                    status=2;
                    count=rows;
                    rows=columns-2;
                    columns=count;
                    goto Found;
                }  
            }
            else
                count=0;
        }
        //slash
        for(columns=0;columns<sidelength;columns++){
            if((!(1&cboard[rows][columns]))&&!(1&cboard[rows+1][columns-1])\
            &&!(1&cboard[rows+2][columns-2])&&(rows+2<sidelength)&&(columns-2>=0)){
               // count++;
                //if(3==count)
                {
                    status=3;
                    goto Found;
                }     
            }  
            else
                count=0; 
        }
        //backslash
        for(columns=0;columns<sidelength;columns++){
            if((!(1&cboard[rows][columns]))&&!(1&cboard[rows+1][columns+1])\
            &&!(1&cboard[rows+2][columns+2])&&(columns+2<sidelength)&&(rows+2<sidelength)){
                //count++;
                //if(3==count)
                {
                    status=4;
                    goto Found;
                }     
            }  
            else
                count=0; 
        }
    }
    
Found:
    for(count=0;count<32;count++)
        putchar(61);
    putchar(10);
    switch (status){
        case 0:printf("No appear\n");
            return;  
        case 1:printf("Type: rows\n");
            break;
        case 2:printf("Type: columns\n");
            break;    
        case 3:printf("Type: slash\n");
            break;        
        case 4:printf("Type: backslash\n");
            break;   
    }
    printf("Position: ( %-2d,%2d )\n",rows,columns);
    printf("================================\n");
}