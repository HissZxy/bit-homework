#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void Print(int n)
{
	if (n>9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int m;
	printf("请输入一个整数：\n");
	scanf("%d", &m);
	Print(m);
	system("pause");
	return 0;
}