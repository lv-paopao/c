#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int y = 0;
	printf("��������ݣ�");
	scanf("%d", &y);
	if (leap_year(y) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}