#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("����Ҫ���ҵ�����:");
	int k = 0;//Ҫ�ҵ�����
	scanf("%d", &k);
	int sz = sizeof(array) / sizeof(array[0]); //��������Ԫ�ظ���
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);//array[6]=7
			break;
		}
		if (left>right)
		{
			printf("�Ҳ���");
		}
	}
	return 0;
}