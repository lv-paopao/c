#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int my_power(int x,int y)
{
	if (y == 0)
	{
		return 1;
	}
	else
        return x*my_power(x, y - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n和k:");
	scanf("%d %d", &n,&k);
	int num = my_power(n,k);
	printf("结果为%d\n", num);
	system("pause");
	return 0;
}