/*#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int FeiBO(int n){
	int first = 1;
	int second = 1;
	int tmp = 1;
	while (n > 2){
		tmp = first + second;
		first = second;
		second = tmp;
		n--;
     }
	return tmp;
}
int main(){
	int n = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	printf("第%d个斐波那契数是 %d\n", n, FeiBO(n));
	system("pause");
	return 0;
}*/