#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void Print(int n)
//{	
//	if (n>9)
//	{
//		Print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main(){
//	int num = 0;
//	printf("输入一个整数:");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//int main()
//{	
//	int n = 0;
//	printf("输入想求的阶乘");
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for ( i =1 ; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("结果是：%d", ret);
//	return 0;
//}

//int Fac(int n){
//	if (n>1)
//	{
//		return n*Fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main(){
//	int n = 0;
//	printf("输入想求的阶乘");
//	scanf("%d", &n);
//	printf("结果是：%d",Fac(n));
//	return 0;
//}

//int Add(char*arr)
//{
//	int count = 0;
//	while (*arr!='\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main(){
//	char arr[] = "";
//	printf("输入字符:");
//	scanf("%s", &arr);
//	printf("结果是：%d\n", Add(arr));
//	return 0;


//int fac(char* str){
//	if (*str != '\0')
//	{
//		return 1 + fac(str+1);       
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main(){
//	char arr[] = "bit"; 
//	int len = fac(arr);
//	printf("%d", len);
//	return 0;
//}
#include<string.h>
void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
	{
		reverse_string(arr + 1);
	}
	*(arr + len - 1) = tmp;
}
int main(){
	char arr[] = "Hello";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}

//int DigitSum(int num)
//
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10)+num%10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main(){
//	int num = 0;
//	printf("输入数字：");
//	scanf("%d", &num);
//	DigitSum(num);
//	printf("结果%d", DigitSum(num));
//	return 0;
//}


//int Fac(int n,int k)
//{
//	if (k>=1)
//	{
//	return 	n*Fac(n, k -1 );
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main(){
//	int n = 0;
//	int k = 0;
//	printf("输入n=");
//	scanf("%d", &n);
//	printf("输入k=");
//	scanf("%d", &k);
//
//	printf("%d", Fac(n, k));
//	return 0;
//}



//int Fib(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
// int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}