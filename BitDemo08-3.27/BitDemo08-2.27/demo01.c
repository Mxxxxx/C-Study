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
//				//���ڴ��������������
//			//������ʡ�ԡ��С�  ���С�����ʡ��
//		}
//	}
//	return 0;
//}


//������Ϊ��������
//���鴫��
//void BubbleSort(int arr[],int sz)  //������������Ԫ�صĵ�ַ
//{
//	int i = 0;
//	//ȷ��ð�����������
//	for ( i = 0; i < sz-1; i++)
//	{
//		//һ��ð��
//		int flag = 1;
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; //�����Ļ� flag==0
//			}
//		}
//		if (flag == 1)
//		{
//       �����һ��������ȷ��ֱ����������
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
//	//дһ��ð��������,������arr��������
//	//��������Ԫ�رȽϣ�  ����
//	BubbleSort(arr,sz);//
//	PrintArr(arr,sz);
//	return 0;
//}


//������
int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	//������ ��������Ԫ�صĵ�ַ
	//ע�⣺
	//1. sizeof(arr)----sizeof(������)   ---��������ʾ������������---  �����������������С����λ��byte
	//&arr----- ��ʾ��������----ȡ��������������ĵ�ַ
	printf("�׸�Ԫ�ص�ַ %p\n", arr);
	printf("�׸�Ԫ�ص�ַ %p\n", arr+1);    //����һ��Ԫ��

	printf("�׸�Ԫ�ص�ַ %p\n", &arr[0]);
	printf("�׸�Ԫ�ص�ַ %p\n", &arr[0]+1);  //����һ��Ԫ��

	printf("���������ַ   %p\n", &arr);
	printf("���������ַ   %p\n", &arr+1); //������������



	printf("�׸������ַ���ֵ %d\n", *arr);
	return 0;
}