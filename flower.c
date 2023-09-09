#include "Head.h"


void flower(int n, int m)
{
	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}
	for (; n < m; n++) {
		if ((
			(n / 100) * (n / 100) * (n / 100) + \
			((n % 100) / 10) * ((n % 100) / 10) * ((n % 100) / 10) + \
			(n % 10) * (n % 10) * (n % 10)
			) == n)
		{
			printf("%-5d", n);
		}
	}
	putchar(10);
}

void flower_input()
{
	int n, m;
	scanf("%d%d", &n, &m);
	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}
		for (; n < m; n++) {
		if ((
			(n / 100) * (n / 100) * (n / 100) + \
			((n % 100) / 10) * ((n % 100) / 10) * ((n % 100) / 10) + \
			(n % 10) * (n % 10) * (n % 10)
			) == n)
		{
			printf("%-5d", n);
		}
	}
	putchar(10);
}