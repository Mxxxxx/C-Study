#define _CRT_SECURE_NO_WARNINGS
//����ָ��
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*pa = &a; // paһ��ָ��
//	int**ppa = &pa;  // ppa����ָ�� ���һ��ָ��ĵ�ַ
//	printf("%d", **ppa);
//	**ppa = 20;
//	printf("%d", **ppa);
//	return 0;
//}


//ָ������

//int main()
//{
//	//int arr[10] = {0}; //�������� --�����������
//	//char ch[5] = { 0 };//�ַ�����--- ����ַ�����
//	                //ָ������---���ָ��ģ���ַ��
//	//int* arr2[4];   //����ָ������
//	//char* arr3[5];
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		printf("%d  ",*arr[i]);
//	}
//	return 0;
//}



//�ṹ��
//�Լ����帴������


////ѧ��������
//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	short age;
//	char id[18];
//	char sex[5];
//}s2,s3,s4;  //s2 s3 s4 �����Ľṹ�����   ��ȫ�ֱ���
//int main()
//{
//	//s1�Ǿֲ�����
//	struct Stu s1;  //ѧ������s1
//
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	char arr[100];
//	double d;
//};
//typedef struct T
//{
//	char buf[20];
//	struct S s;
//	int* p;
//}T;
//// typedef  - ���Ͷ���-�����ض���
//int main()
//{	
//	int a = 10;
//	// �ṹ�����.��Ա��
//	//�ṹ��ָ��->��Ա����
//	struct S s = {100,'w',"bit",3.14};
//	T st = { "hello", {100, 'b', "bit", 3.14 }, &a};
//	struct T st1;
//	T* pt = &st;
//
//	printf("%s\n", pt->buf);
//	printf("%lf", pt->s.d);
//
//	//�ṹ���Ա�ķ���
//	//printf("%s\n", st.buf);
//	//printf("%d\n", st.s.a);
//	//printf("%c\n", st.s.c);
//	//printf("%s\n", st.s.arr);
//	//printf("%lf\n", st.s.d);
//	//printf("%d\n", *(st.p));
//
//	return 0;
//}




//struct Stu
//{
//	//����ѧ�����������
//	char name[20];
//	short age;
//	char id[18];
//	char sex[5];
//}s2,s3,s4;
//void Print(struct Stu tmp)
//{
//	printf("%s\t%s\%d\t%s\n", tmp.name, tmp.id);
//}
//
//void Print0(struct Stu* ps)
//{
//	printf("%s\t%s\%d\t%s\n", ps->name,ps->id);
//
//}
//
//int main()
//{
//	struct Stu s = { "����", "201902050", 20, "��" };
//	Print(s);
//	Print0(&s);
//}


int main()