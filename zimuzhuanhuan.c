
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch = 0;
	printf("����һ���ַ�!\n");
	while ((ch = getchar()) != 0){  //ѭ����ch����ʾΪASCIIֵ
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
