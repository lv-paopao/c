#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

递归
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
	printf("请输入n:");
	scanf("%d", &n);
	int num = factorial(n);
	printf("结果为%d\n", num);
	system("pause");
	return 0;
}

非递归
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
	printf("请输入n:");
	scanf("%d", &n);
	int num = factorial(n);
	printf("结果为%d\n", num);
	system("pause");
	return 0;
}