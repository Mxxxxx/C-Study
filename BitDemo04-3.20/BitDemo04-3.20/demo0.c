#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����Լ��
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int min = m > n ? n : m;
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("���Լ���ǣ�%d", min);
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
//	//EOF = end of file �ļ�������־��һ������ļ�ĩβ
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//scanf��getchar     �Ǵ����뻺�����ã�����������Ƿ������뻺����
//	//scanf 123456��\n��û����     getchar   \n---�������ж�ʧ��
//	//123456 ABC\n   һ��getchar����
//	int ch = 0;
//	char input[20] = { 0 };
//	printf("��������:");
//	scanf("%s", input);
//	printf("ȷ������:��Y/N��");
//	//getchar();//������\n
//
//	//��ջ�����
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch=='Y')
//	{
//		printf("�ɹ�");
//	}
//	else
//	{
//		printf("ʧ��");
//	}
//	return 0;
//}


//int main(){
//	//int i = 0;//��ʼ��
//	//while (i<10)//�ж�
//	//{
//	//	printf("%d", i);
//	//	i++;//����
//	//}
//
//	int i = 0;
//	//while�� break:
//	//continue һ�� ����������ѭ��
//	for ( i = 0; i < 10; i++)
//	{	
//		if (i==5)
//		{
//			//break;//����֮���ȫ��
//			continue;//��������
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
//		//������for ѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ����
//		printf("%d", i);
//
//	}
//
//	return 0;
//}

//int main(){
//	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)//����ʹ��ǰ�պ�
//	{
//		printf("%d", array[i]);
//	}
//	return 0;
//}


//int main(){
//	//ѭ������ִ��һ��
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


//whileѭ��һ���׳�
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


//forѭ��һ���׳�
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

//�׳��ۼ�
//int main(){
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <=3; n++)
//		{
//		//����n�Ľ׳�
//		ret = 1;//ÿ�δ�1��ʼ
//		for (i = 1; i <= n; i++)
//			{
//				ret = ret*i;
//			}
//		sum = sum + ret;
//		}
//	printf("%d\n", sum);
//	return 0;
//}


//�Ż�
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



//����1--n�Ľ׳��ۼ�
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

