#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void get_num(int x)
{
	if (x < 10)
	{
		printf("%d ", x);
	}
	else
	{
		get_num(x / 10);
		printf("%d ", x%10);
	}
}
int main()
{
	int n = 0;
	printf("������һ��������");
	scanf("%d", &n);
	get_num(n);
	printf("\n");
	system("pause");
	return 0;
}