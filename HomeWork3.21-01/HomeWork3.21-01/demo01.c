#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 1到 100 的所有整数中出现多少个数字9
//int main(){
//	int count = 11;// 90---99中11个9 
//	int i = 0;
//	int a = 0;
//	for ( i = 1; i <90; i++)
//	{	
//		if (i % 10 == 9)
//		{
//			a = count++;
//		}
//	}
//	printf("出现9的次数是：%d", a);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main(){
//	float a = 0.0;
//	int i = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i%2==0)
//		{
//			a=a-1.0/i;
//		}
//		else
//		{
//			a = a + 1.0/i;
//		}
//	}
//	printf("%f", a);
//	return 0;
//}


//求10 个整数中最大值
//int main(){
//	int i = 0;
//	int j = 0;
//	int num[10] = { 0 };
//	int temp;
//	printf("输入十个整数：");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d\n", &num[i]);
//	}
//	for ( j = 0; j <=10; j++)
//	{
//		if (num[0] < num[j+ 1])
//		{
//			temp = num[0];
//			num[0] = num[j+1];
//			num[j + 1] = temp;
//		}
//	}
//	printf("最大值：%d", num[0]);
//	return 0;
//}


//输出9*9乘法口诀表
int main(){
	int i = 0;
	int j = 0;
	int num = 0;
	for ( i = 1; i < 10; i++)
	{
		printf("\n");
		for (j= 1; j <=i;j++)
		{
			num = i*j;
			printf("  %d*%d=%d  ", i, j,num);
		}
	}
	return 0;
}