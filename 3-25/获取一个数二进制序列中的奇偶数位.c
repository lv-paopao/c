#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[32] = { 0 };
	int i = 0;
	int m = 0;
	int count = 0;
	printf("请输入一个十进制数：");
	scanf("%d", &m);
	for (i = 0; m != 0; i++)
	{
		arr[i] = m % 2;
		m = m / 2;//将十进制转换为二进制
		count=i+1;
	}
	for (; count < 32; count++)
	{
		arr[count] = 0;
	}
	printf("奇数位为：");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("偶数位为：");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}