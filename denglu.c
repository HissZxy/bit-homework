#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char arr[10] = {0};
	int i = 0;
	char *a = "123456";
	for (i = 0; i < 3; i++){
		printf("���������룺\n");
		scanf("%s", arr);
		if (strcmp(arr, a) == 0){

			printf("������ȷ��\n");
			break;
		}
		else{
			printf("����������������룡\n");
		}
	}
	if (i == 3)
	{
		printf("�����������δ���goodbye��\n");
	}

	system("pause");
	return 0;
}
