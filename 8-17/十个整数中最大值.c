#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int max = 0;
	int arr[10] = { 0 };
	printf("������ʮ������");
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[1];
	for (i = 0; i <= 9; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("���ֵΪ��%d", max);
	system("pause");
	return 0;
}