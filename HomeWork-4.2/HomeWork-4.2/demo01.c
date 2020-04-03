#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Pritn(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",*arr+i );
//	}
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Pritn(arr,sz);
//	return 0;
//}


//void Reversr(char* arr,int sz)
//{
//	int i = 0;
//	char* left = arr;
//	char* right = arr+sz-1;
//	for ( i = 0; i < sz; i++)
//	{	
//		if (left<right)
//		{
//
//			char temp = *left;
//			*left = *right;
//			*right = temp;
//			left++;
//			right--;
//		}
//		}
//}
//int main()
//{
//	char arr[] ="a b c";
//	//printf("输入字符：");
//	//scanf("%s", &arr);
//	int sz = sizeof(arr) / sizeof(0);
//	Reversr(arr,sz);
//
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%s",arr[i]);
//	}
//	return 0;
//}


//int Sn(int a)
//{	
//	int i = 0;
//	int b = 0;
//	int tmp = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		b = (b * 10 + a);
//		tmp += b;
//	}
//	return tmp;
//}
//int main()
//{	
//	int a = 0;
//	printf("输入小于9一个数字:");
//	scanf("%d", &a);
//	int ret=Sn(a);
//	printf("%d", ret);
//	return 0;
//}


//#include<math.h>
////计算
//int  Judge(int i)
//{
//	int ret=Count(i);
//	int sum = 0;
//	while (i)
//	{
//		sum += pow(i%10, ret);
//		i=i / 10;
//	}
//	return sum;
//}
////判断位
//int Count(int num)
//{
//	int count = 1;
//	while (num/10!=0)
//	{
//		num = num / 10;
//		count = count + 1;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		int c=Judge(i);
//		if (c==i)
//		{
//			printf("%d  ", c);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int line = 7;
//	int i = 0;
//	for (i = 0; i<line; i++)
//	{
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i<line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<string.h>
void Reverse(char* arr,int sz)
{
	arr = arr + sz - 1;
	while (sz--)
	{
		printf("%c", *arr);
		arr = arr - 1;
	}
}
int main()
{
	char arr[1000] = {0};
	gets(arr);
	int sz = strlen(arr);
	Reverse(arr,sz);
	return 0;
}