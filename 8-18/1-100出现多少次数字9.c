#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//计算个位数出现9的次数
		{
			j++;
		}
		if (i / 10 == 9)//计算十位数出现9的次数
		{
			j++;
		}
	}
	printf("%d", j);
	system("pause");
	return 0;
}

