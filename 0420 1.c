#include<stdio.h>
#include<stdlib.h>

unsigned int round(unsigned n){
	int i;
	unsigned int tmp, sum = 0;
	for (i = 0; i < 32; i++, n /= 2){
		tmp=n % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}





int main1(){
	system("color 24");
	
	printf("%u\n", round(25));
/*	int n = 15;
	int i, tmp,sum = 0;
	for (i = n; i; i /= 10){
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	*/
	system("pause");
	return 0;
}