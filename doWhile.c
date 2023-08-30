#include "Head.h"


//���ѡ��
void doWhile()
{
	int n, passwd;

	do
	{
		printf("�������˺����롣\n");
		printf("name : ");
		scanf("%d", &n);
		printf("password : ");
		scanf("%d", &passwd);
	} while (!(n == 222 && passwd == 333));
	printf("Welcome��");
}