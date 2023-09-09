#include "Head.h"



void Switch()
{
	int i;
	printf("please input a number:\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1: printf("your input number is %d", 1);break;			
	case 2:	printf("your input number is %d", 2);break;		
	case 3:	printf("your input number is %d", 3);break;		
	case 4:	printf("your input number is %d", 4);break;		
	case 5:	printf("your input number is %d", 5);break;	
	default:printf("Error");
	}
}
