/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("=============================\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("=============================\n");
}

void game()
{
	int ret_num = rand() % 100 + 1;
	int num = 0;
	while(1){
		printf("请输入猜的数字：");
		scanf("%d", &num);
		if (num > ret_num){
			printf("高了！\n");
		}
		else if (num < ret_num){
			printf("低了!\n");
		}
		else{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}

int main1()
{
	int num = 0;
	srand((unsigned)time(NULL));
	menu();
	printf("请做出你的选择\n");
	scanf("%d", &num);
	switch (num){
	case 1:game();
		break;
	case 0:printf("good bye!\n");
		break;
	case 3:
		printf("您的输入有错误!\n");
		break;
	}
	system("pause");
}
*/

