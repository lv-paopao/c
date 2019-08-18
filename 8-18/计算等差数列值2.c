#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int tmp=1;
	double sum=0;
	for (i = 1; i <=100; i ++)
	{
		sum = sum + tmp*(1.0 / i);
		tmp = -1 * tmp;//±ä»»Õý¸ººÅ
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}
