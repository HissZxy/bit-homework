#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int print(int num)
{
	int i = 0;
	for (i = 1; i <= num; i++)
	{
		int j = 0;


		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, j*i);
		}
		printf("\n");
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}
