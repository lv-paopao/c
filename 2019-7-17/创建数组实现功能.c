#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void Init(int arr[10])
{
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
		printf("%d",arr[i]);
	}
	printf("\n");
}
void Empty(int arr[10])
{
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = 0;
		printf("%d", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[10], int size)
{
	int tmp = 0;
	int left = 0; 
	int right = size - 1; 
	for (int i = 0; i < 10; ++i)
	{
		while (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			++left; --right;
		}
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("数组元素逆置：\n");
	Reverse(arr, size);
	printf("初始化数组：\n");
	Init(arr);
	printf("清空数组中的每位元素为0：\n");
	Empty(arr);
	system("pause");
	return 0;
}