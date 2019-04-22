#include<stdio.h>
#include<stdlib.h>
int main3(){
	system("color 24");
	int a[10] = {1, 1, 2, 3, 4, 2, 3, 5, 5, };
	int i;
	int sum = 0;
	for (i = 0; i < 9; i++){
		sum ^= a[i];
	}
	int pos;
	for (i = 0; i < 32; i++){
		if (sum & 1 << i){
			pos = i;
			break;
		}
	}
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < 10; i++){
		if (a[i] & 1 << pos){
			num1 ^= a[i];
		}
		else{
			num2 ^= a[i];
		}
	}

	printf(" %d\n", num1);
	system("pause");
	return 0;
}