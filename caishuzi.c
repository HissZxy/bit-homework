/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("=============================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("=============================\n");
}

void game()
{
	int ret_num = rand() % 100 + 1;
	int num = 0;
	while(1){
		printf("������µ����֣�");
		scanf("%d", &num);
		if (num > ret_num){
			printf("���ˣ�\n");
		}
		else if (num < ret_num){
			printf("����!\n");
		}
		else{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}

int main1()
{
	int num = 0;
	srand((unsigned)time(NULL));
	menu();
	printf("���������ѡ��\n");
	scanf("%d", &num);
	switch (num){
	case 1:game();
		break;
	case 0:printf("good bye!\n");
		break;
	case 3:
		printf("���������д���!\n");
		break;
	}
	system("pause");
}
*/

