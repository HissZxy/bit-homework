
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch = 0;
	printf("输入一个字符!\n");
	while ((ch = getchar()) != 0){  //循环中ch均表示为ASCII值
		if (ch >= 'a'&&ch <= 'z'){
			printf("%c", ch - 32);
		}
		if (ch >= 'A' && ch <= 'Z'){
			printf("%c", ch + 32);
		}
		if (ch >= '0'&&ch <= '9'){
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
