/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int FeiBo(int n){
	if (n <= 2){
		return 1;
	}
	else{
		return FeiBo(n - 1) + FeiBo(n - 2);
	}
}

int main(){
	int n = 0;
	printf("������һ������:\n");
	scanf("%d", &n);
	int tmp = FeiBo(n);
	printf("��%d��쳲���������    %d\n",n, tmp);
    system("pause");
	return 0;
}*/