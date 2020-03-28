#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main(){
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{	
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p \n", i, j, &arr[i][j]);
//				//在内存中依旧连续存放
//			//不可以省略【列】  【行】可以省略
//		}
//	}
//	return 0;
//}


//数组作为函数参数
//数组传参
//void BubbleSort(int arr[],int sz)  //数组名就是首元素的地址
//{
//	int i = 0;
//	//确定冒泡排序的趟数
//	for ( i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡
//		int flag = 1;
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //交换的话 flag==0
//			}
//		}
//		if (flag == 1)
//		{
//       如果有一次排序正确，直接跳过后续
//			break;
//		}
//	}
//}
//void PrintArr(int* arr, int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//写一个冒泡排序函数,将数组arr升序排列
//	//两两相连元素比较，  多趟
//	BubbleSort(arr,sz);//
//	PrintArr(arr,sz);
//	return 0;
//}


//数组名
int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	//数组名 是数组首元素的地址
	//注意：
	//1. sizeof(arr)----sizeof(数组名)   ---数组名表示的是整个数组---  其计算的是整个数组大小，单位是byte
	//&arr----- 表示整个数组----取出的是整个数组的地址
	printf("首个元素地址 %p\n", arr);
	printf("首个元素地址 %p\n", arr+1);    //跳过一个元素

	printf("首个元素地址 %p\n", &arr[0]);
	printf("首个元素地址 %p\n", &arr[0]+1);  //跳过一个元素

	printf("整个数组地址   %p\n", &arr);
	printf("整个数组地址   %p\n", &arr+1); //跳过整个数组



	printf("首个数组地址里的值 %d\n", *arr);
	return 0;
}