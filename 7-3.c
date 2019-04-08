/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int JiSuan(int n,int k){
	if (k == 0){
		return 0;
	}
	else if (k == 1){
		return n;
	}
	else{
		return n*JiSuan(n, k - 1);
	}

}

int main(){
	int n;
	int k;
	printf("请输入n k\n");
	scanf("%d %d", &n, &k);
	printf("结果为：%d\n", JiSuan(n, k));
    system("pause");
	return 0;

}*/