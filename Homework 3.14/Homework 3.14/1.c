#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int MAX(int num1,int num2){
	if (num1>num2)
	{
		printf("�ϴ��ֵ�ǣ�%d\n", num1);
	}
	else if (num1==num2)
	{
		printf("����ֵ��ȣ�Ϊ��%d\n", num1);
	}
	else
	{
		printf("�ϴ��ֵ�ǣ�%d\n", num2);
	}
	return 0;
}
int main(){
	int a = 0;
	int b = 0;
	printf("������������:\n");
	scanf("%d%d",&a,&b);
	MAX(a,b);
	return 0;
}