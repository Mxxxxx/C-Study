#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<string.h>

//int main(){
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ�ҵ�����
//	int sz = sizeof(array) / sizeof(array[0]); //��������Ԫ�ظ���
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		if (array[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);//array[6]=7
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//���ַ�����
//int main(){
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//Ҫ�ҵ�����
//	int sz = sizeof(array) / sizeof(array[0]); //��������Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);//array[6]=7
//			break;
//		}
//		if (left>right)
//		{
//			printf("�Ҳ���");
//		}
//	}
//	return 0;
//}



//int main(){
//	                         //�ַ����� �����  \0   sz-2  sizeof
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
//		Sleep(100);   //˯�ߺ���  ��λ����
//		system("cls"); //ִ��ϵͳ����  cls�����Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//�����Լ�������ͷ�ļ���ʹ��  " "
//�������⺯����ͷ�ļ���    < >



//�û���¼
//int main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("��������:");
//		scanf("%s", &password);//������ȷ����123456
//		//�ж�
//		//�����ַ����Ƚϴ�С������ֱ����==    ��Ӧ��ʹ��strcmp() �⺯��
//		if (strcmp(password,"123456"))
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i==3)
//	{
//		printf("�����������,�˳�\n");
//
//	}
//	return 0;
//}




//#include <stdlib.h>
//#include<time.h>
////time���� �ܷ���һ�� ʱ���     ������ڵ���time���������ʱ��ͼ������ʼʱ�䣨1970.1.1 0��0��0����һ����ֵ����λ��s
//void menu()
//{
//	printf("**********************************\n");
//	printf("****** 1.play ***** 0.exit *******\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	//��������һ�������
//	//ֻҪ����һ��,����Ƶ������
//	int ret = rand()%100+1;
//	//rand()����0--32762�������)
//	//printf("%d\n", ret);
//	//������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("�¶���");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
	//�ػ�
	//shutdown -s -s 60
 	//shuntdown -a ȡ��
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("������һ���Ӻ�ػ������������ȡ���ػ�");
	printf("������");
	scanf("%s", &input);
	if (0==strcmp(input,"����"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}