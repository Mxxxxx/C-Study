#define _CRT_SECURE_NO_WARNINGS
#include<iostream>   //�⺯������
using namespace std; //���������ռ�std�ڶ�������б�ʶ��
int add(int, int);   //��������
void main()   //������
{
	int a, b; //��������a��b
	a = 5;   // ��ֵa=5
	b = 7;   // ��ֵb=7
	int c = add(a, b);  //���ú���add������������ֵ��ֵ��c
	cout<< "a+b=" << c << endl;   //���c
}
int add(int x, int y)  //��������
{
	return x + y; //��������int��ֵ��ֵΪx+y�Ľ��
}