#include "Head.h"


void doWhile()
{
	int n, passwd;

	do
	{
		printf("Input your account and password.\n");
		printf("name : ");
		scanf("%d", &n);
		printf("password : ");
		scanf("%d", &passwd);
	} while (!(n == 222 && passwd == 333));
	printf("Welcome!");
}
