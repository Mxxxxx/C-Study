#define _CRT_SECURE_NO_WARNINGS
//二级指针
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*pa = &a; // pa一级指针
//	int**ppa = &pa;  // ppa二级指针 存放一级指针的地址
//	printf("%d", **ppa);
//	**ppa = 20;
//	printf("%d", **ppa);
//	return 0;
//}


//指针数组

//int main()
//{
//	//int arr[10] = {0}; //整型数组 --存放整型数据
//	//char ch[5] = { 0 };//字符数组--- 存放字符数据
//	                //指针数组---存放指针的（地址）
//	//int* arr2[4];   //整型指针数组
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



//结构体
//自己定义复杂类型


////学生的类型
//struct Stu
//{
//	//描述学生的相关属性
//	char name[20];
//	short age;
//	char id[18];
//	char sex[5];
//}s2,s3,s4;  //s2 s3 s4 创建的结构体变量   是全局变量
//int main()
//{
//	//s1是局部变量
//	struct Stu s1;  //学生对象s1
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
//// typedef  - 类型定义-类型重定义
//int main()
//{	
//	int a = 10;
//	// 结构体变量.成员名
//	//结构体指针->成员变量
//	struct S s = {100,'w',"bit",3.14};
//	T st = { "hello", {100, 'b', "bit", 3.14 }, &a};
//	struct T st1;
//	T* pt = &st;
//
//	printf("%s\n", pt->buf);
//	printf("%lf", pt->s.d);
//
//	//结构体成员的访问
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
//	//描述学生的相关属性
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
//	struct Stu s = { "李明", "201902050", 20, "男" };
//	Print(s);
//	Print0(&s);
//}


int main()