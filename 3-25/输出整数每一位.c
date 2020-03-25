#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void out_put(int x)
{
	if (x < 10)
	{
		printf("%d ", x);
	}
	if (x >= 10)
	{
		out_put(x / 10);
		printf("%d ", x % 10);
	}
}
int main()
{
	int num = 0;
	printf("请输入一个正整数：");
	scanf("%d", &num);
	out_put(num);
	printf("\n");
	return 0;
}