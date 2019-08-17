#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[3] = { 0 };
	printf("请输入三个整数");
	for (i = 0; i <= 2; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 2 - j; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				k = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = k;
			}
		}
	}
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}