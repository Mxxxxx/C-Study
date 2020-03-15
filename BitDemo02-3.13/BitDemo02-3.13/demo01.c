#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 1000
#include<string.h>
//性别
//创建一个性别枚举类型
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMAL,
//	SECRET
//};
//
//int main(){
//	//常量
//	//1、字面常量   无法改变
//	//int a=300;
//	//float b=3.14;
//	//2、const修饰的常变量   无法改变,虽然修饰了，但依旧是变量。
//	/*const int c = 20;
//	printf("c=%d\n", c);*/
//	/*const int n = 10;
//	int array[n] = { 0 };*/
//	//3、#define定义的标识符常量  
//	/*int a = MAX;
//	printf("a=%d\n", a);*/
//	//4、枚举常量   一一列举（性别：男、女、保密） enum
//	/*int num = 10;
//	enum Sex s=MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMAL);
//	printf("%d\n",SECRET);*/
//	return 0;
//}
//int main(){
//	"abc"; //字面字符串
//	"";//空字符串
//	//字符数组
//	//a-97  A-97
//	//对字符串来说，字符串结尾处存放一个'\0'，是字符串的结束标志,不算字符串的内容。
//	char array1[] = "abc";   //  abc\0         
//	char array2[] = { 'a', 'b', 'c' };//缺少\0，继续打印直到遇到0结束
//	char array3[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", array1);
//	printf("%s\n", array2);//字符串用%s
//	printf("%s\n", array3);
//	printf("+++++++++++\n");
//	printf("%d\n", strlen(array1));//strlen 计算字符串长度
//	printf("%d\n", strlen(array2));//随机长度
//		return 0;
//}
//int main(){
	//转义字符 
	//  \t --水平制表符
	/*printf("c\tabc\tfdfd");*/
	//%c 打印字符
	//%d 打印整型
	//%s 字符串
	//%f 浮点型
	//%p 地址
//	printf("%d\n", strlen("bit"));
//	//   \ddd   ddd表示八进制数字
//	printf("%d\n", strlen("c:\test\32\test.c")); //13    \t   \32  \
//	return 0;
//}
//int main(){
//	/*int input = 0;
//	printf("选择加入\n");
//	printf("是否学习/n");
//	scanf("%d", &input);
//	if (input==1)
//	{    
//		printf("123\n");
//	}
//	else
//	{
//		printf("456/n");
//	}*/
//
//	//int line = 0;
//	//while (line<20)
//	//{
//	//	printf("敲代码%d\n",line);
//	//	line++;
//	//} printf("Good\n");
//	//
//	//return 0;
//
//}
//int Add(int x, int y){
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(){
//	//函数
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1,num2);
//	printf("%d\n", sum);
//	return 0;
int main(){
	//数组 一组相同类型元素的集合
	//int i = 0;
	//int array1[10] = {1,2,3,4,5,6,7,8,9,10 };//指定数组大小
	////int array2[] = { 1, 2, 4, 5, 6, 7, 8, 9, 10 };//未指定
	for (i = 0; i <= sizeof(array1) / sizeof(array1[0]); i++)
	//{
	//	printf("%d\n", array1[i]);
	//}
	//	return 0;
	//}
	///*while (i<10)
	//{
	//	printf("%d", array1[i]);
	//	i++;
	//}
	printf("%d\n", strlen("c:\test\121"));
		return 0;
}
//int main(){
//
//	//int a = 3;
//	//int b = 5;
//	//int c = a&b;//与
//	//int d = a | b; //或
//	//int a = 10;//变量初始化
//	//a= 9;//赋值操作符
//	//a = a + 1;
//	//a += 1;
//	//a -= 1;
//	//a
//	//int array[10] = { 0 };
//	//int sz = sizeof(array) / sizeof(array[0]);//计算数组元素个数
//	//printf("%d\n", sizeof(array));//计算内存大小
//	//printf("%d\n", sz);
//
//}