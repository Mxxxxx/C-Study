#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Sum(int num)
{	
	int count = num;
	while (num/2!=0)
	{
		num = num / 2; //��ƿ��ȡ��
		count += num;  
	}
	return count;
}
int main()
{
	int num = 0;
	printf("���빺���");
	scanf("%d", &num);
	int ret=Sum(num);
	printf("һ�����Ժ�%dƿ��ˮ", ret);
	return 0;
}