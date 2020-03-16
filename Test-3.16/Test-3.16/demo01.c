#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
extern int Judge(int x, int y);
int main(){
	                       //test01
	/*int num1 = 0;
	int num2 = 0;
	printf("输入两个数字：\n");
	scanf("%d%d", &num1, &num2);
	printf("较大的数是：%d\n", Judge(num1, num2));
	return 0;*/

	                      //test02
	//int array[] = { 1, 2, 3, 4, 5 ,6};
	//int i = 0;
	///*i = sizeof(array) / sizeof(array[0]);
	//printf("%d\n", i);*/
	//for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	//{
	//	printf("%d\n", array[i]);
	//}
	//return 0;

	                      //test03
	int a = 10;
	int*p = &a;  //
	printf("%p\n", &a);
	printf("%p\n", &*p);
	*p = 20;//* 引用指针指向的变量值
		printf("%d\n", a);
	return 0;

}