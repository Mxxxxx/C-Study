#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy   �ַ�����������
//int main()
//{
//
//	char arr1[20] = "#########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);      //arr2�����ݿ�����arr1
//	// bit\0#########    ��Ϊ��\0����########û�д�ӡ 
//	printf("%s\n", arr1);
//	return 0;
//}


//memset   �ڴ�����
//int main(){
//	char arr[] = "hello bit";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//}


//�Զ��庯��

//ret_type(�������ͣ� fun_name����������(paral,*)������������
//{
//  statement;�������壩
//}
//int get_max(int x, int y){
//	
//	return (x > y ? x : y);
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("%d\n", max);
//	return 0;
//}


//void change_num1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void change_num2(int*pa, int*pb)
//{
//	int tmp;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a=%d  b=%d\n", a, b);
//
//	//��ֵ����
//	//�β� ʵ�ηֱ�ռ�ò�ͬ�ڴ��
//	change_num1(a, b); //a bʵ�� 
//	printf("a=%d  b=%d\n", a, b);
//	//��ʵ�δ����β�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//
//	//��ַ����
//	change_num2(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//int main(){
//
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//�����ж�����
//#include<math.h>
//int is_prime(int n)
//{
//	//�ж� n �Ƿ�������
//	//2-- n-1������
//	int i = 0;
//	for (i = 2; i <=sqrt(n); i++)
//	{
//		if (n%i==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <=200; i++)
//	{	
//		//�����ж�
//		if (is_prime(i)==1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n������%d\n", count);
//	return 0;
//}


//�ж�����
//int is_leap_year(int year){
//	if ((year%4==0&&year%100!=0)||(year%400==0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year)==1)
//		{	
//			count++;
//			printf("%d  ", year);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//���ֲ���
                 // int*arr ������
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{	
//		int mid = (right + left) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	//�Ҳ���
//	return -1;
//}
//int main(){
//	int arra[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 60;
//	int sz = sizeof(arra) / sizeof(arra[0]);
//	printf("����Ҫ�ҵ�");
//	scanf("%d", &k);
//	//���鴫�ε�ʱ��   ������ȥ��һ���������������ϴ���ȥ�����������Ԫ�صĵ�ַ����&arr[0]��
//	//���鴫�λᷢ������    �����Ԫ�صĵ�ַ
//	//����ķ�������
//	int ret=binary_search(arra,k,sz);//�ҵ������±꣬�Ҳ�������-1
//	if (ret==-1)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//	}
//	return 0;
//}


//�����д����ֵ��Ҫ�ı䣬��ַ
//���ú��� num+1
//void Add(int*p){
//	(*p)++;
//}
//int main(){
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int main(){
//	//1
//	int len=strlen("bit");
//	printf("len=%d\n",len);
//	//2
//	printf("len=%d\n", strlen("bit"));
//	return 0;
//}


//int main(){
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include "calc.h"
int main(){
	int a = 10;
	int b = 20;
	//��������
	int sum = Add(a, b);
	int sub = Sub(a, b);
	printf("%d", sum);
	return 0;
}
