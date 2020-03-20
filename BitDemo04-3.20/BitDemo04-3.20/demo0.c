#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求最大公约数
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int min = m > n ? n : m;
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("最大公约数是：%d", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}

//int main(){
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main(){
//	int ch = 0;
//	//EOF = end of file 文件结束标志。一般放在文件末尾
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//scanf、getchar     是从输入缓冲区拿，键盘输入的是放在输入缓冲区
//	//scanf 123456（\n）没拿走     getchar   \n---》导致判断失败
//	//123456 ABC\n   一个getchar不够
//	int ch = 0;
//	char input[20] = { 0 };
//	printf("输入密码:");
//	scanf("%s", input);
//	printf("确认密码:（Y/N）");
//	//getchar();//先拿走\n
//
//	//清空缓冲区
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch=='Y')
//	{
//		printf("成功");
//	}
//	else
//	{
//		printf("失败");
//	}
//	return 0;
//}


//int main(){
//	//int i = 0;//初始化
//	//while (i<10)//判断
//	//{
//	//	printf("%d", i);
//	//	i++;//调整
//	//}
//
//	int i = 0;
//	//while中 break:
//	//continue 一样 ，但容易死循环
//	for ( i = 0; i < 10; i++)
//	{	
//		if (i==5)
//		{
//			//break;//跳过之后的全部
//			continue;//跳过本次
//		}
//		printf("%d", i);
//
//	}
//
//	return 0;
//}

//int main(){
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		//不可在for 循环体内修改循环变量，防止 for 循环失去控制
//		printf("%d", i);
//
//	}
//
//	return 0;
//}

//int main(){
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)//尽量使用前闭后开
//	{
//		printf("%d", array[i]);
//	}
//	return 0;
//}


//int main(){
//	//循环至少执行一次
//	int i = 0;
//	do
//	{	
//		if (i==5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d",i);
//		i++;
//
//	} while (i<10);
//	return 0;
//}


//while循环一个阶乘
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i<=n)
//	{
//		ret = ret*i;
//		i++;
//	}
//	printf("%d", ret);
//	return 0;
//}


//for循环一个阶乘
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for ( i = 1; i <=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//阶乘累加
//int main(){
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <=3; n++)
//		{
//		//计算n的阶乘
//		ret = 1;//每次从1开始
//		for (i = 1; i <= n; i++)
//			{
//				ret = ret*i;
//			}
//		sum = sum + ret;
//		}
//	printf("%d\n", sum);
//	return 0;
//}


//优化
//int main(){
//	int n = 1;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <=10; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



//计算1--n的阶乘累加
//int main(){
//	int x = 0;
//	scanf("%d",&x);
//	int i = 0;
//	int ret = 0;
//	int z = 0;
//	int sum = 0;
//	for (i = 1; i <=x; i++)
//	{
//		ret = 1;
//		for (z = 1; z <= i; z++)
//		{
//			ret = ret*z;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



int main(){
	int i = 0;
	int x = 0;
	int sum = 0;
	int ret = 1;
	for ( i = 1; i <= 3; i++)
	{	
		int ret = 1;
		for ( x = 1;  x<=i ; x++)
		{
			ret = ret*x;
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}

