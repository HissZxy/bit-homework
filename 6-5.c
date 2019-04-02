/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int prime(int num)
{
	int k = 0;
	int i = 0;
	k = sqrt(num);
	for (i = 2; i <= k; i++)   
	{
		if (num%i == 0)
		{
			return 0;
		}
	}
	return -1;
}

int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入数字:\n");
	scanf("%d", &num);
	ret = prime(num);
	if (ret == 0)   
	{
		printf("%d 不是素数\n", num);
	}
	else           
	{
		printf("%d 是素数\n", num);
	}
	system("pause");
	return 0;
}
*/
