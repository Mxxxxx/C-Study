#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
	//int num = 0;
	//printf("����һ������:");
	//scanf("%d", &num);
	//if (num%2==0)
	//{
	//	printf("ż��");
	//}
	//else
	//{
	//	printf("����");
	//}

	//int num1 = 0;
	//int num2 = 0;
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{	
	//	num2=num1++;
	//	if (num2==5)
	//	{
	//		continue;//��������ѭ�������������

	//	}
	//	else if (num2==8)
	//	{
	//		break;//��ֹȫ��
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
	//���100�����б�3����������,
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
				printf("��3������%d\n", i);
			}
		}
	}
int main() 
{
	func(1);
	return 0;
}
	