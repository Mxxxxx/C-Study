#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main(){
//	int a = 10;
//	//4字节-32bit
//	//二进制 00000000000000000000000000001010
//	int b = ~a;
//	//按位取反 111111111111111111111111111110101
//
//	return 0;
//}
//int main(){
//	int a = 10;
//	int b = a--;//后置--   先使用a的值，再--
//	int d = 10;
//	int c = --d;//前置--    先--，再只用a
//	int e = 10;
//	int f = e++;//后置++
//	int h = 10;
//	int j = ++h;//前置++
//	printf("h=%d j=%d\n", h,j);
//	printf("f=%d e=%d\n", f, e);
//	printf("b=%d a=%d\n", b, a);
//	printf("c=%d d=%d\n", c, d);
//	return 0;
//}
//int mian(){
//	//强制类型转换
//	int a =(int)3.14;//double
//	return 0;
//}
//int main(){
//	//条件操作符  -三目操作符
//	//epx1 ? exp2:exp3
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main(){
//	int array[] = { 0, 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", array[4]);
//	// []下标引用操作符
//
//	return 0;
//}
//int Add(int x, int y){
//	int z = x + y;
//	return z;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//调用函数       ()函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}
//typedef unsigned int u_int;
//int main(){
//	//局部变量都是auto类型
//	//typedef类型重定义
//	//定义一个年龄变量
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}
//int main(){
//	register int a = 0;//假设a未来会被大量的使用
//	//register就是  建议   把a放在寄存器中
//	return 0;
////}
//void test(){
//	static int a = 1;//修饰局部变量      延长了变量生命周期，出了局部变量不销毁
//	a++;
//	printf("%d", a);
//}
//int main(){
//	//static静态修饰
//	//1、修饰局i部变量   2、修饰全局变量  3、修饰函数
//	//修饰局部变量
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////static修饰全局变量         限制了全局变量的作用域，变小，只能在所在的.c文件内使用
//int a = 10;
//extern int g_val;                //声明外部符号的
//int main(){
//	printf("%d\n", a);
//	printf("%d\n", g_val);  //申明全局变量
//	return 0;
//}

//static修饰函数  改变函数的作用域，只能自己所在的源文件内使用


//extern int Add(int x, int y);
//int main(){
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//
//	return 0;
//}

//#define定义常量
//#define MAX 10
//int main(){
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//

////#define定义宏
//
////函数定义
//Max(int x, int y){
//	return x > y ? x : y;//条件操作符
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))    //宏定义
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//指针
//int main(){
//	int a = 10;   //创建整型变量a，并且赋值10
//	//存储10
//	//要有内存空间
//	//a在创建时，像内存申请4个字节的空间
//	//&a;  //&取地址操作符
//	printf("%p\n", &a);     //%p取地址
//	int*p = &a;   //p是指针变量     用来存放地址
//	printf("%p\n", p);
//	return 0;
//}

int main(){
	char ch = 'a';
	char* pc=&ch;
	*pc = 'w';
	printf("%d\n", sizeof(pc));
	printf("%c\n", ch);
	return 0;
	//32位   指针4字节
	//64位   指针8字节

}
//int main(){
//	int a = 10;
//	int* pa= &a;
//	*pa=20;//解引用操作符   *pa就是 a
//	printf("%d\n", a);
//	return 0;
//}