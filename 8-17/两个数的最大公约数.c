#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个操作数：");
	scanf("%d %d", &a, &b);
	int tmp = a%b;
	while (a%b > 0)
	{
		a = b;
		b = tmp;
	}
	printf("最大公约数为：%d",b);
	system("pause");
	return 0;
}