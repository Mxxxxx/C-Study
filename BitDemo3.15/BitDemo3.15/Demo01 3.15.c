#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main(){
//	int a = 10;
//	//4�ֽ�-32bit
//	//������ 00000000000000000000000000001010
//	int b = ~a;
//	//��λȡ�� 111111111111111111111111111110101
//
//	return 0;
//}
//int main(){
//	int a = 10;
//	int b = a--;//����--   ��ʹ��a��ֵ����--
//	int d = 10;
//	int c = --d;//ǰ��--    ��--����ֻ��a
//	int e = 10;
//	int f = e++;//����++
//	int h = 10;
//	int j = ++h;//ǰ��++
//	printf("h=%d j=%d\n", h,j);
//	printf("f=%d e=%d\n", f, e);
//	printf("b=%d a=%d\n", b, a);
//	printf("c=%d d=%d\n", c, d);
//	return 0;
//}
//int mian(){
//	//ǿ������ת��
//	int a =(int)3.14;//double
//	return 0;
//}
//int main(){
//	//����������  -��Ŀ������
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
//	// []�±����ò�����
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
//	int sum = Add(a, b);//���ú���       ()�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}
//typedef unsigned int u_int;
//int main(){
//	//�ֲ���������auto����
//	//typedef�����ض���
//	//����һ���������
//	unsigned int age;
//	u_int age2;
//
//	return 0;
//}
//int main(){
//	register int a = 0;//����aδ���ᱻ������ʹ��
//	//register����  ����   ��a���ڼĴ�����
//	return 0;
////}
//void test(){
//	static int a = 1;//���ξֲ�����      �ӳ��˱����������ڣ����˾ֲ�����������
//	a++;
//	printf("%d", a);
//}
//int main(){
//	//static��̬����
//	//1�����ξ�i������   2������ȫ�ֱ���  3�����κ���
//	//���ξֲ�����
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////static����ȫ�ֱ���         ������ȫ�ֱ����������򣬱�С��ֻ�������ڵ�.c�ļ���ʹ��
//int a = 10;
//extern int g_val;                //�����ⲿ���ŵ�
//int main(){
//	printf("%d\n", a);
//	printf("%d\n", g_val);  //����ȫ�ֱ���
//	return 0;
//}

//static���κ���  �ı亯����������ֻ���Լ����ڵ�Դ�ļ���ʹ��


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

//#define���峣��
//#define MAX 10
//int main(){
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//

////#define�����
//
////��������
//Max(int x, int y){
//	return x > y ? x : y;//����������
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))    //�궨��
//int main(){
//	int a = 10;
//	int b = 20;
//	int max=Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//ָ��
//int main(){
//	int a = 10;   //�������ͱ���a�����Ҹ�ֵ10
//	//�洢10
//	//Ҫ���ڴ�ռ�
//	//a�ڴ���ʱ�����ڴ�����4���ֽڵĿռ�
//	//&a;  //&ȡ��ַ������
//	printf("%p\n", &a);     //%pȡ��ַ
//	int*p = &a;   //p��ָ�����     ������ŵ�ַ
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
	//32λ   ָ��4�ֽ�
	//64λ   ָ��8�ֽ�

}
//int main(){
//	int a = 10;
//	int* pa= &a;
//	*pa=20;//�����ò�����   *pa���� a
//	printf("%d\n", a);
//	return 0;
//}