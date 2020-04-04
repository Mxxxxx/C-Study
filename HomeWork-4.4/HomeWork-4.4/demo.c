#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Sum(int num)
{	
	int count = num;
	while (num/2!=0)
	{
		num = num / 2; //空瓶换取的
		count += num;  
	}
	return count;
}
int main()
{
	int num = 0;
	printf("输入购买金额：");
	scanf("%d", &num);
	int ret=Sum(num);
	printf("一共可以喝%d瓶汽水", ret);
	return 0;
}