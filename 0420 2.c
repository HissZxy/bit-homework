#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int average(){
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a > b){
		int avg=b+(a - b) / 2;
		printf("结果%d\n", avg);
	}
	else{
		int avg = a + (b - a) / 2;
		printf("结果%d\n", avg);
	}
	return 0;
}
int main2(){
	system("color 24");
	printf("请输两个整数\n");
	average();
	system("pause");
	return 0;
}