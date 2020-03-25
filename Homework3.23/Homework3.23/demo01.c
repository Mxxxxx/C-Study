#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("输入要查找的数字:");
	int k = 0;//要找的数字
	scanf("%d", &k);
	int sz = sizeof(array) / sizeof(array[0]); //计算数组元素个数
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left<=right)
	{	
		int mid = (left + right) / 2;
		if (array[mid]<k)
		{
			left = mid + 1;
		}
		else if (array[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);//array[6]=7
			break;
		}
		if (left>right)
		{
			printf("找不到");
		}
	}
	return 0;
}