#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main(){
//	//�����ݹ�   �����Լ������Լ�
//	//ջ��  �ֲ����� �β�  ��������
//	//����  ��̬�ڴ����
//	//��̬��  ȫ�ֱ���  ��̬����
//	printf("hehe\n");
//	main();
//	return 0;
////}


//�ݹ���Ҫ��������  �����𲽱Ƚ���������
//void Print(unsigned int n)
//{
//	if (n>9)
//	{
//		Print(n / 10);// Print(12)     Print(1)
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	Print(num);
//	//Print(123)
//	//Print(12)+3
//	//Print(1)+2+3
//	return 0;
//}

//my_strlen(char* str){
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++; //��ַ����1
//	}
//	return count;
//}
//#include<string.h>
//int main(){
//	char arr[] = "bit"; //����������Ԫ�ص�ַ char�ĵ�ַ��char*
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



//#include<string.h>
//int my_strlen(char* str){
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1); //�����ݹ�
//		            //str++
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main(){
//	char arr[] = "bit"; //����������Ԫ�ص�ַ char�ĵ�ַ��char*
//	int len = my_strlen(arr);
//	printf("%d", len);
//	//1+my_strlen("it")
//	//1+1+my_strlen("t")
//	//+1+1+1+my_strlen("")
//	//1+1+1+0
//	return 0;
//}


//�ݹ������


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int Fac(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}


//쳲���������
//1 1 2 3 5 8 13 21 34 55.....

//�ݹ�
//ֵ���� ����ʱ�����Ĺ���
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

//int Fib(int n)
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
//
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//����
//һ����ͬ����Ԫ�صļ���
//int main(){
//// Ԫ������  ������ {�����С-����}
//	int arr1[100] = {0};
//	char ch[5];
//	return 0;
//}

//#include<string.h>
//int main(){
//	int arr[10] = {1,2,3,};//���鲻��ȫ��ʼ�� -ֻ��ʼ��������ʣ��Ĭ�ϳ�ʼ��Ϊ0.
//	char arr1[] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	arr[4]; //�±����ò�����
//	int i = 0;
//	int*p = arr;
//	for ( i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		//printf("%d_",arr[i]);
//		//printf("arr[%d]=%p\n", i, &arr[i]);
//		//������������ŵ�
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}



//��ά����
int main()
{
	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } }; //��������
	return 0;
}