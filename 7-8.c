/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Factor(int n){
	if (n == 0){
		return 1;
	 }
	else{
		return n*Factor(n - 1);
	}
}
int main(){
	int i;
	printf("请输入一个是整数：\n");
	scanf("%d", &i);
	printf("%d\n", Factor(i));
    system("pause");
	return 0;
}*/