#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 1�� 100 �����������г��ֶ��ٸ�����9
//int main(){
//	int count = 11;// 90---99��11��9 
//	int i = 0;
//	int a = 0;
//	for ( i = 1; i <90; i++)
//	{	
//		if (i % 10 == 9)
//		{
//			a = count++;
//		}
//	}
//	printf("����9�Ĵ����ǣ�%d", a);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main(){
//	float a = 0.0;
//	int i = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i%2==0)
//		{
//			a=a-1.0/i;
//		}
//		else
//		{
//			a = a + 1.0/i;
//		}
//	}
//	printf("%f", a);
//	return 0;
//}


//��10 �����������ֵ
//int main(){
//	int i = 0;
//	int j = 0;
//	int num[10] = { 0 };
//	int temp;
//	printf("����ʮ��������");
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d\n", &num[i]);
//	}
//	for ( j = 0; j <=10; j++)
//	{
//		if (num[0] < num[j+ 1])
//		{
//			temp = num[0];
//			num[0] = num[j+1];
//			num[j + 1] = temp;
//		}
//	}
//	printf("���ֵ��%d", num[0]);
//	return 0;
//}


//���9*9�˷��ھ���
int main(){
	int i = 0;
	int j = 0;
	int num = 0;
	for ( i = 1; i < 10; i++)
	{
		printf("\n");
		for (j= 1; j <=i;j++)
		{
			num = i*j;
			printf("  %d*%d=%d  ", i, j,num);
		}
	}
	return 0;
}