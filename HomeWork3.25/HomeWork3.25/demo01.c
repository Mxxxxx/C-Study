#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//int judge_num(int n)
//{
//	int i = 0;
//	for ( i = 2; i <=sqrt(n); i++)
//	{
//		if (n%i==0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//int main(){
//	int n = 0;
//	for ( n = 100; n  <=200; n ++)
//	{
//		if (judge_num(n)==1)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//int judge_year(int year)
//{
//	if ((year%4==0&&year%100!=0)||(year%400==0))
//	{
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int year = 0;
//	printf("输入一个年份");
//	scanf("%d", &year);
//	if (judge_year(year)==1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//int change_num(int*a,int*b){
//	int tmp = 0;
//	tmp = *a;
//	*a =*b;
//	*b = tmp;
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("输入两个数字");
//	scanf("%d %d", &a, &b);
//	change_num(&a,&b);
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}

int mul(int a)
{
	int i = 1;
	int z = 1;
	int y = 0;
	for (  i = 1; i <= a; i++)
	{
		for ( z = 1; z <= i; z++)
		{
			y = i*z;
			printf(" %d*%d=% d ", i, z, y);
		}
		printf("\n");
	}
}
int main(){
	int a = 0;
	printf("输入想要打印的乘法口诀表");
	scanf("%d", &a);
	printf("%d",mul(a));
	return 0;
}