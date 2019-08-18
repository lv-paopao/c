#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	double sum;
	double sum1 = 0;
	double sum2 = 0;
	for (i = 1; i < 100; i+=2)//¼ÆËãÆæÊýºÍ
	{
		sum1 = sum1 + 1.0 / i;
	}
	for (i = 2; i <= 100; i += 2)//¼ÆËãÅ¼ÊýºÍ
	{
		sum2 = sum2 + 1.0 / i;
	}
	sum = sum1 - sum2;
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}

//1/1+1/3+1/5+...+1/99(sum1)
//-
//1/2+1/4+1/6+...+1/100(sum2)
