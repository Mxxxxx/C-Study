#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
	//int num = 0;
	//printf("输入一个数字:");
	//scanf("%d", &num);
	//if (num%2==0)
	//{
	//	printf("偶数");
	//}
	//else
	//{
	//	printf("奇数");
	//}

	//int num1 = 0;
	//int num2 = 0;
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{	
	//	num2=num1++;
	//	if (num2==5)
	//	{
	//		continue;//跳出本次循环，继续后面的

	//	}
	//	else if (num2==8)
	//	{
	//		break;//终止全部
	//	}
	//	printf("%d", num2);
	//}

	/*int num1 = 0;
	int i = 0;
	for (i = 0; i < 105; i++)
	{
		if (i % 2 == 0)
		{
			num1 = i;
		}
	}
		printf("->%d", num1);*/
	//输出100内所有被3整除的数字,
int func(int i)
{
		int x=0;
		for (i = 1; i < 100; i++)
		{
			x = 0;
			if (i % 3 == 0)
			{
				x = 1;
			}
			if (x == 1)
			{
				printf("被3整除：%d\n", i);
			}
		}
	}
int main() 
{
	func(1);
	return 0;
}
	