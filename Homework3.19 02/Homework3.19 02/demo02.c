#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int num = 0;
	int i = 1;
	printf("1-100֮������3�ı���������:");
	while (1)
	{	
		num++;
		i = num * 3;
		if (i > 100)
		{
			break;
		}
		printf("%d ", i);
	}
}