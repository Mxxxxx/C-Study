#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int i = 0;
	int num = 1;
	for (i = 0; i < 100; i++)
	{
		num = 3 * num;
		printf("1-100之间所有3的倍数的数字:%d ", num);
	}
}