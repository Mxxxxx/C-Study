#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
	                    //�ṹ��
					//�Լ�����һ������---�Զ�������
	                 //����һ�� �� ����
//�ṹ�����.��Ա�� ==  *ָ��.��Ա��==ָ��->��Ա��
	//struct Book
	//{  //���������ϸ����Ϣ
	//	char  name[30];//����
	//	double price;//����
	//	char id[30];//���
	//};
	//int main(){
	//	//����һ����
	//	struct Book b1 = { "С˵", 55.62, "ISBN-100006" };
	//	//����һ���ṹ��ָ��
	//	struct Book*ps=&b1;
	//	printf("������%s\n", (*ps).name);//  . ������
	//	printf("������%s\n", ps->name);// ->   ������
	//	//struct Book b2 = { "��˵", 60.25, "ISBN-156485" };
	//	//printf("������%s\n", b1.name);
	//	//printf("���ۣ�%lf\n",b1.price);
	//	//printf("��ţ�%s\n", b1.id);
	//return 0;
	//}
//             ��֧����ѭ�����                           
int main(){
	/*int age = 0;
	scanf("%d", &age);
	if (age<18)
	{
		printf("δ����\n");
	}
	else if (age>=18&&age<30)
	{
		printf("����\n");
	}
	else if (age>=30&&age<60)
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}*/
	//int age = 10;
	//if (5==age)  //����д�����׳���    =��==
	//{
	//	printf("hehe\n");
	//}
	/*int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("ż��");
	}*/
	/*int num = 1;
	int i = 0;
	for ( i = 0; i < 100; i++)
	{
		if (num%2==1)
		{
			printf("%d��", num);
		}
		num++;
	}*/

	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("����һ");
	//	break;
	//case 2:
	//	printf("���ڶ�");
	//	break;
	//case 3:
	//	printf("������");
	//	break;
	//case 4:
	//	printf("������");
	//	break;
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//	printf("������");
	//case 7:
	//	printf("������");
	//	break;
	//default: //��ƥ��ѡ��
	//	printf("�������\n");
	//	break;
	//}

	/*while (1)
	{
		printf("����");
		break;
	}*/

	int i = 0;
	//whileѭ���е�break������������ֹѭ��
	//continue����ѭ����ߵĴ��룬ֱ�ӵ��жϲ��֣�������һ��ѭ��������ж�
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