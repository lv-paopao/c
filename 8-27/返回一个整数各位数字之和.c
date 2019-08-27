#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int digit_sum(n)
{
	if (n < 10)
	{
		return n;
	}
	else
		return n%10 + digit_sum(n/10);
}
int main()
{
	int n = 0;
	printf("请输入一个整数:");
	scanf("%d", &n);
	int sum = digit_sum(n);
	printf("结果为%d\n", sum);
	system("pause");
	return 0;
}