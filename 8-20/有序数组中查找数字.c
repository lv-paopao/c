#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

	int BinarySearch(int arr[], int size, int to_find)//调用函数
	{
		int left = 0;
		int right = size - 1;//[left,light]为待查找的区间
		while (left <= right)
		{
			int mid = left + (right-left) / 2;//区间中间值
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
		printf("请输入要查找的数字;");
		scanf("%d", &to_find);
		int size = sizeof(arr) / sizeof(arr[0]);//计算数组中元素的个数
		int i = BinarySearch(arr, size, to_find);
		if (i == -1)
		{
			printf("没找到！\n");
		}
		else
			printf("找到了，下标为：%d\n", i);
	system("pause");
	return 0;
    }