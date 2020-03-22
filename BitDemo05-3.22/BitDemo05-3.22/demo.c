#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<string.h>

//int main(){
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要找的数字
//	int sz = sizeof(array) / sizeof(array[0]); //计算数组元素个数
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		if (array[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);//array[6]=7
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//二分法查找
//int main(){
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//要找的数字
//	int sz = sizeof(array) / sizeof(array[0]); //计算数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left<=right)
//	{	
//		int mid = (left + right) / 2;
//		if (array[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (array[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);//array[6]=7
//			break;
//		}
//		if (left>right)
//		{
//			printf("找不到");
//		}
//	}
//	return 0;
//}



//int main(){
//	                         //字符类型 最后有  \0   sz-2  sizeof
//							// strlen   len-1
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);   //睡眠函数  单位毫秒
//		system("cls"); //执行系统命令  cls清空屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//引入自己创建的头文件，使用  " "
//如果引入库函数的头文件用    < >



//用户登录
//int main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("输入密码:");
//		scanf("%s", &password);//假设正确密码123456
//		//判断
//		//两个字符串比较大小，不能直接用==    而应该使用strcmp() 库函数
//		if (strcmp(password,"123456"))
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i==3)
//	{
//		printf("三次输入错误,退出\n");
//
//	}
//	return 0;
//}




//#include <stdlib.h>
//#include<time.h>
////time函数 能返回一个 时间戳     计算机在调用time函数的这个时间和计算机起始时间（1970.1.1 0：0：0）的一个差值，单位是s
//void menu()
//{
//	printf("**********************************\n");
//	printf("****** 1.play ***** 0.exit *******\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	//电脑生成一个随机数
//	//只要调用一次,不能频繁调用
//	int ret = rand()%100+1;
//	//rand()返回0--32762间的整数)
//	//printf("%d\n", ret);
//	//猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//	} while (input);
//
//	return 0;
//}




//int main(){
//again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

#include <stdlib.h>
int main(){
	//关机
	//shutdown -s -s 60
 	//shuntdown -a 取消
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑在一分钟后关机，输入哈哈，取消关机");
	printf("请输入");
	scanf("%s", &input);
	if (0==strcmp(input,"哈哈"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}