#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char arr[10] = {0};
	int i = 0;
	char *a = "123456";
	for (i = 0; i < 3; i++){
		printf("请输入密码：\n");
		scanf("%s", arr);
		if (strcmp(arr, a) == 0){

			printf("密码正确！\n");
			break;
		}
		else{
			printf("密码错误，请重新输入！\n");
		}
	}
	if (i == 3)
	{
		printf("连续输入三次错误，goodbye！\n");
	}

	system("pause");
	return 0;
}
