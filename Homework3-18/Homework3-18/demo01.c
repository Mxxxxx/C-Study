#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x = 0;
	int y = 0;
	int z = 0;
	int temp = 0;
	printf("�����������֣�");
	scanf("%d%d%d", &x, &y, &z);
	if (x<y)
	{
		temp = y;
		y = x;
		x = temp;
	}
	if (x<z)
	{
		temp = z;
		z = x;
		x = temp;
	}
	if (y<z)
	{
		temp = z;
		z = y;
		y = temp;
	}
	printf("�Ӵ�С�����ǣ�%d %d %d", x, y, z);
	return 0;
}


