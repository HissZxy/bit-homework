/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int leapyear(int year){
	if ((year % 4 == 0 && year / 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}

}
int main(){
	int year;
		int ret = 0;
		printf("��������ݣ�");
		scanf("%d", &year);
		ret =leapyear(year);
		if (ret == 1){
			printf("%d������\n", year);
		}
		else{
			printf("%d��������\n", year);
		}
		system("pause");
		return 0;

		

}*/