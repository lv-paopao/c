#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 5, 6, 7, 8, 9 };
	int arr3[5],i;
	printf("数组A为%d,%d,%d,%d,%d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
	printf("数组B为%d,%d,%d,%d,%d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
	for (i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = arr3[i];
	}
	printf("数组A为%d,%d,%d,%d,%d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
	printf("数组B为%d,%d,%d,%d,%d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
	system("pause");
	return 0;
}
