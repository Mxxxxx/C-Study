#define _CRT_SECURE_NO_WARNINGS
#include<iostream>   //库函数调用
using namespace std; //调用命名空间std内定义的所有标识符
int add(int, int);   //函数声明
void main()   //主函数
{
	int a, b; //定义整型a，b
	a = 5;   // 赋值a=5
	b = 7;   // 赋值b=7
	int c = add(a, b);  //调用函数add（），将返回值赋值给c
	cout<< "a+b=" << c << endl;   //输出c
}
int add(int x, int y)  //函数定义
{
	return x + y; //函数返回int型值，值为x+y的结果
}