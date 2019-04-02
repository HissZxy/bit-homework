/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void init(int arr[], int len)
{
	int i = 0;
	printf("初始化数组：\n");

	for (i = 0; i<len; i++)
	{
		scanf("%d", &arr[i]);
	}

}

void reverse(int arr[], int len)
{
	int i = 0;
	printf("逆置数组：\n");

	for (i = len - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}

void empty(int arr[], int len)
{
	int i = 0;
	printf("清空数组：\n");
	for (i = 0; i<len; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10];
	int len = 0;
	int i = 0;
	len = sizeof(arr) / sizeof(arr[0]);

	init(arr, len);
	reverse(arr, len);
	printf("\n");
	empty(arr, len);
	system("pause");
	return 0;
}*/


