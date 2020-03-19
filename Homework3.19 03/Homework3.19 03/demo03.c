#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	/*int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("输入两个数字 ：");
	scanf("%d%d", &num1, &num2);
	while (num2!=0)
	{
		num3 = num1%num2;
		num1 = num2;
		num2 = num3;
		if (num2 == 0)
		{
			printf("最大公约数是：%d", num1);
			break;
		}
	}*/
	 
	/*int i = 0;
	for ( i = 1000; i < 2001; i++)
	{
		if (i%4==0||i%400==0)
		{
			printf("%d ",i);
		}
	}*/
	int i = 0;
	int z = 0;
	int y = 0;
	for ( i = 100; i < 201; i++)
	{
		y = 0;
		for ( z = 2; z < i; z++)
		{
			if (i%z == 0)
			{
				y = 1;
			}	
		}
		if (y==0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}