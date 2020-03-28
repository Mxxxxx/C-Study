#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void Bubble_PX(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 1;
//	int j = 0;
//	for (j = 0; j < sz-1; j++)
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//		{
//			break;
//		}
//	}
//}
//int main(){
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_PX(arr,sz);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int tmp = 0;
//	while (left<=right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//int main(){
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

void Arr_Change(int arr1[], int arr2[],int sz)
{
	int i = 0;
	int tmp = 0;
	for ( i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
void Print(int arr[],int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 5, 6, 7, 8 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Arr_Change(arr1, arr2, sz);
	Print(arr1, sz);
	Print(arr2, sz);

	return 0;
}