#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
	                    //结构体
					//自己创建一个类型---自定义类型
	                 //创建一个 书 类型
//结构体变量.成员名 ==  *指针.成员名==指针->成员名
	//struct Book
	//{  //放描述书的细节信息
	//	char  name[30];//书名
	//	double price;//定价
	//	char id[30];//书号
	//};
	//int main(){
	//	//定义一本书
	//	struct Book b1 = { "小说", 55.62, "ISBN-100006" };
	//	//创建一个结构体指针
	//	struct Book*ps=&b1;
	//	printf("书名：%s\n", (*ps).name);//  . 操作符
	//	printf("书名：%s\n", ps->name);// ->   操作符
	//	//struct Book b2 = { "大说", 60.25, "ISBN-156485" };
	//	//printf("书名：%s\n", b1.name);
	//	//printf("定价：%lf\n",b1.price);
	//	//printf("书号：%s\n", b1.id);
	//return 0;
	//}
//             分支语句和循环语句                           
int main(){
	/*int age = 0;
	scanf("%d", &age);
	if (age<18)
	{
		printf("未成年\n");
	}
	else if (age>=18&&age<30)
	{
		printf("青年\n");
	}
	else if (age>=30&&age<60)
	{
		printf("中老年\n");
	}
	else
	{
		printf("老年\n");
	}*/
	//int age = 10;
	//if (5==age)  //这样写不容易出错    =与==
	//{
	//	printf("hehe\n");
	//}
	/*int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
	{
		printf("奇数\n");
	}
	else
	{
		printf("偶数");
	}*/
	/*int num = 1;
	int i = 0;
	for ( i = 0; i < 100; i++)
	{
		if (num%2==1)
		{
			printf("%d、", num);
		}
		num++;
	}*/

	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("星期一");
	//	break;
	//case 2:
	//	printf("星期二");
	//	break;
	//case 3:
	//	printf("星期三");
	//	break;
	//case 4:
	//	printf("星期四");
	//	break;
	//case 5:
	//	printf("星期五");
	//	break;
	//case 6:
	//	printf("星期六");
	//case 7:
	//	printf("星期天");
	//	break;
	//default: //不匹配选项
	//	printf("输入错误\n");
	//	break;
	//}

	/*while (1)
	{
		printf("哈哈");
		break;
	}*/

	int i = 0;
	//while循环中的break，用于永久终止循环
	//continue跳过循环后边的代码，直接到判断部分，进行下一次循环的入口判断
	while (i<10)
	{
		if (i==5)
		{
			//break;
			continue;
		}
		printf("%d ", i);
		i++;
	}

	return 0;
}