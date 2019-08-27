#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
利用递归
int get_num(int x)
{
	if (x <= 0)
	{
		return 0; 
	}
	if (x == 1 || x == 2)
	{
		return 1;
	}
	return get_num(x - 2) + get_num(x - 1);
}
int main()
{
	int n = 0;
	printf("请输入项数：");
	scanf("%d", &n);
	int num = get_num(n);
	printf("第%d项为%d\n", n, num);
	system("pause");
	return 0;
}

非递归
int get_num(int x)
{
	int num1 = 1;
	int num2 = 1;
	int num3 = 1;
	int i = 0;
	for (i = 0; i < x - 2; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
	}
	return num3;
}
int main()
{
	int n = 0;
	int num=0;
	printf("请输入项数:");
	scanf("%d", &n);
	num = get_num(n);
	printf("第%d项为%d\n", n, num);
	system("pause");
	return 0;
}