#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void reverse_string(char *string)
{
	if ('\0' != *(++string))
		reverse_string(string);
	printf("%c", *(string - 1));
}

void Init(){
	char a[20];
	for (int i = 0; i < 20; ++i){
		printf("ÇëÊäÈë×Ö·û£º\n");
		scanf("%s", &a[i]);
		getchar();
		if (i + 1 == 20){
			a[i + 1] = '\0';
		}
}


	