#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= 6; i++)//����ϰ벿��
	{
		for (j = 0; j <= 6-i; j++)
		{
			printf(" ");//����ո�
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");//����Ǻ�
		}
		printf("\n");
    }
	for (i = 0; i <= 6; i++)//����°벿��
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");//����ո�
		}
		for (j = 0; j < 13 - (2 * i); j++)
		{
			printf("*");//����Ǻ�
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
//�ϰ벿��
//6 1
//5 3
//4 5
//...
//0 13
//�°벿��
//1 11
//2 9
//3 7
//...
//6 1