#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������������������");
	scanf("%d %d", &a, &b);
	int tmp = a%b;
	while (a%b > 0)
	{
		a = b;
		b = tmp;
	}
	printf("���Լ��Ϊ��%d",b);
	system("pause");
	return 0;
}