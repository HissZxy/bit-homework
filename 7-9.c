/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Factor(int n){
	int i = 0;
	int sum = 1;
	if (n == 0){
		return 1;
	}
	for (i = 1; i <= n; ++i){
		sum *= i;
	}
	return sum;
}
int main(){
	int m;
	printf("请输入一个整数：\n");
	scanf("%d", &m);
	printf("%d\n", Factor(m));
    system("pause");

	return 0;
}*/