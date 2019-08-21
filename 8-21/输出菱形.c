#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 6; i++)//输出上半部分
	{
		for (j = 0; j <= 6-i; j++)
		{
			printf(" ");//输出空格
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");//输出星号
		}
		printf("\n");
    }
	for (i = 0; i <= 6; i++)//输出下半部分
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");//输出空格
		}
		for (j = 0; j < 13 - (2 * i); j++)
		{
			printf("*");//输出星号
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
//上半部分
//6 1
//5 3
//4 5
//...
//0 13
//下半部分
//1 11
//2 9
//3 7
//...
//6 1