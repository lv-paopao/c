#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

�ݹ�
int factorial(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x*factorial(x - 1);
	}
}
int main()
{
	int n = 0;
	printf("������n:");
	scanf("%d", &n);
	int num = factorial(n);
	printf("���Ϊ%d\n", num);
	system("pause");
	return 0;
}

�ǵݹ�
int factorial(int x)
{
	int i = 0;
	int num = 1;
	for (i = 1; i <= x; i++)
	{
		num = i*num;
	}
	return num;
}
int main()
{
	int n = 0;
	printf("������n:");
	scanf("%d", &n);
	int num = factorial(n);
	printf("���Ϊ%d\n", num);
	system("pause");
	return 0;
}