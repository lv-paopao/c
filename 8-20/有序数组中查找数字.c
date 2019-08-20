#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

	int BinarySearch(int arr[], int size, int to_find)//���ú���
	{
		int left = 0;
		int right = size - 1;//[left,light]Ϊ�����ҵ�����
		while (left <= right)
		{
			int mid = left + (right-left) / 2;//�����м�ֵ
			if (to_find < arr[mid])
			{
				right = mid - 1;
			}
			else if (to_find > arr[mid])
			{
				left = mid + 1;
			}
			else
				return mid;
		}
		return -1;
	}
	int main()
	{
		int arr[] = { 1, 3, 5, 2, 7, 9, 6, 0 };
		int to_find = 0;
		printf("������Ҫ���ҵ�����;");
		scanf("%d", &to_find);
		int size = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�صĸ���
		int i = BinarySearch(arr, size, to_find);
		if (i == -1)
		{
			printf("û�ҵ���\n");
		}
		else
			printf("�ҵ��ˣ��±�Ϊ��%d\n", i);
	system("pause");
	return 0;
    }