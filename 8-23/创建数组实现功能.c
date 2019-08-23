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
	printf("����Ԫ�����ã�\n");
	Reverse(arr, size);
	printf("��ʼ�����飺\n");
	Init(arr);
	printf("��������е�ÿλԪ��Ϊ0��\n");
	Empty(arr);
	system("pause");
	return 0;
}