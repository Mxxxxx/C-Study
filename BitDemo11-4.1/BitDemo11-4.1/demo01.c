#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;  //指针变量  存放指针（地址）的变量
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;//解引用
//
//	char* pa = &a;
//	*pa = 0;
//	//指针类型是有意义的
//	// char*指针  访问1个字节
//	//int*  访问4个字节
//	return 0;
//}

//1.指针类型决定了指针进行解引用操作的访问多大空间
// char*指针  访问1个字节
//int*  访问4个字节
//2.指针类型决定了指针+1，跳过多少字节
// char*指针+1  跳1个字节
//int*+1  跳4个字节


//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);   //4字节增加
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);  //1字节增加
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	
//	//int i = 0;
//	//int*p=arr;
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	*(p + i)=1; //下标i的元素
//	//}
//
//	int i = 0;
//	char*p = arr;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i)=1;
//	}
//
//	return 0;
//}


//野指针  指针指向的位置是不可知的（随机的，不正确的，没有明确限制）
//1.指针未初始化
//2.数组越界
//3.非法访问内存


//int* test()
//{
//	int a = 10;
//	return &a; //局部变量地址释放
//}
//
//
//int main()
//{	
//	//int a;//局部变量-随机值
//	
//	//未初始化
//	//int*pa = 10;
//	//*pa = 5;
//
//	//数组越界
//	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for ( i = 0; i <= 12; i++)
//	{
//		*p = 0;
//		p++;
//	}*/
//
//	//非法访问内存
//	int *p = test();    //局部变量空间释放
//	*p = 20;
//
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int* p = &a;//初始化
//	int* p2=NULL;//不知道pa指向哪里  则定义空指针
//	return 0;
//}


//指针运算
//指针+-整数
//指针-指针
//指针关系运算

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);//地址-地址 ---  指针-指针
//	//指针-指针的绝对值    计算的是指针和指针直接元素的个数
//	//指针必须指向同意空间
//	return 0;
//}

////#include<string.h>
////int my_strlen(char* str)
////{
////	char* start = str;
////	char* end = str;
////	while (*end!='\0')
////	{
////		end++;
////	}
////	return end - start;
////}
////int main()
////{
////	int len = my_strlen("abc");
////	printf("%d\n", len);
////	return 0;
////}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);  //int*
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]); //int*
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);// 数组指针类型
//	printf("%p\n", &arr+1);
//	//数组名是数组首元素的地址
//	//例外：
//	//1. sizeof（数组名）   这里的数组名表示整个数组   ，计算的是整个数组的大小
//	//2. &数组名   表示整个数组     &数组名  取出的是整个数组的地址
//	return 0;
//}


//数组可以通过指针访问

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		//printf("%p------%p\n", p + i, &arr[i]);
		*(p + i) = i + 1;
	}
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i)); //*（arr+i）==  arr[i] == p[i] == *(p + i) ==i[p]
	}
	return  0;
}