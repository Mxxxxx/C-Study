#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int num1 = 0;
	int num2 = 0;
	printf("�����������֣�");
	scanf("%d%d", &num1, &num2);
	int tmp = num1^num2;   //��ͬΪ0  ��ͬΪ1
	int i = 0;
	int count = 0;
	//4        000000000000000000000000000000100
	//2        000000000000000000000000000000010
	for (i = 0; i < 32; i++)
	{
		if ((tmp>>i&1)==1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

//void fac1(int num)
//{
//	int i=0;
//	for (int i = 1; i <= 31; i += 2)
//	{
//			printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//void fac2(int num)
//{
//	int i = 0;
//	for (int i = 0; i <= 30; i += 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	printf("����һ������");
//	int num = 0;
//	scanf("%d", &num);
//	printf("����λ�ǣ�");
//	fac1(num);
//	printf("ż��λ�ǣ�");
//	fac2(num);
//	return 0;
//}

//void fac1(int num)
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 0; i <=31; i++)
//	{
//		if ((num>>i)&1==1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//int main()
//{
//	printf("����һ������");
//	int num = 0;
//	scanf("%d", &num);
//	printf("�����ж�������1�����ǣ�");
//	fac1(num);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 5;
//	printf("a=%d  b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d  b=%d\n", a, b);
//
//}