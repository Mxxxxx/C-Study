#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy   字符串操作函数
//int main()
//{
//
//	char arr1[20] = "#########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);      //arr2的数据拷贝到arr1
//	// bit\0#########    因为有\0所以########没有打印 
//	printf("%s\n", arr1);
//	return 0;
//}


//memset   内存设置
//int main(){
//	char arr[] = "hello bit";
//	memset(arr, '*',5);
//	printf("%s\n", arr);
//	return 0;
//}


//自定义函数

//ret_type(返回类型） fun_name（函数名）(paral,*)（函数参数）
//{
//  statement;（函数体）
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
//	//传值调用
//	//形参 实参分别占用不同内存块
//	change_num1(a, b); //a b实参 
//	printf("a=%d  b=%d\n", a, b);
//	//把实参传给形参时，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//
//	//传址调用
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


//函数判断素数
//#include<math.h>
//int is_prime(int n)
//{
//	//判断 n 是否是素数
//	//2-- n-1的数字
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
//		//函数判断
//		if (is_prime(i)==1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n个数：%d\n", count);
//	return 0;
//}


//判断闰年
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


//二分查找
                 // int*arr 本质上
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
//	//找不到
//	return -1;
//}
//int main(){
//	int arra[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 60;
//	int sz = sizeof(arra) / sizeof(arra[0]);
//	printf("输入要找的");
//	scanf("%d", &k);
//	//数组传参的时候   【传过去的一个数组名，本质上传过去的是数组的首元素的地址，即&arr[0]】
//	//数组传参会发生降级    变成首元素的地址
//	//计算的放在外面
//	int ret=binary_search(arra,k,sz);//找到返回下标，找不到返回-1
//	if (ret==-1)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	return 0;
//}


//函数中传入的值需要改变，传址
//调用函数 num+1
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
	//函数调用
	int sum = Add(a, b);
	int sub = Sub(a, b);
	printf("%d", sum);
	return 0;
}
